/****************************************************************************\
* Copyright (C) 2017 pmdtechnologies ag
*
* THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
* KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
\****************************************************************************/


#include <iostream>
#include <thread>
#include <chrono>
#include <iomanip>
#include <list>
#include <array>
#include <vector>
#include <fstream>
#include <cstdlib> 
#include <string>
#include <getopt.h>
#include <unistd.h>
#include "royale.hpp"
#include "royale/ICameraDevice.hpp"
#include "CameraFactory.hpp"
#include "camera.h"

#ifndef ROYALE_ACCESS_CODE_LEVEL2
//#define ROYALE_ACCESS_CODE_LEVEL2 "" // Insert activation code here
#endif

//using namespace sample_utils;
using namespace std;
using namespace royale;
using namespace platform;
using std::ofstream;

string VERSION{"1.3"};
const bool EXIT_ON_ERROR = true;
int testPattern;


void print_help() 
{
    cout <<
            "-v                   Show program version\n"
            "-l                   Set line counter test pattern\n"
            "-o                   Set overflow counter test pattern\n"
            "-a                   Set alternating line counter and toggling constant test pattern\n"
            "-t                   Set toggling constant test pattern\n"	
            "-h                   Show help\n";
    exit(EXIT_FAILURE);
}

#define OPTSTR "vr:m:h:loat"

typedef struct {
  string         version;
  int            numSecondsToStream;
  royale::String test_mode;
  int teston;
} options_t;


Camera::CameraError Camera::RunAccessLevelTests(int user_level)
{
    // Get the access level
    royale::CameraAccessLevel level;
    royale::CameraStatus status = camera_->getAccessLevel(level);

    clog << "Verifying access level is 3 " << endl;
    if (status != royale::CameraStatus::SUCCESS)
    {
        cerr << "[ERROR] Could not grab the access level. " 
                  << royale::getStatusString(status).c_str() << endl;
        return ACCESS_LEVEL_ERROR;
    }

    // Check if access level was set properly
    access_level_ = static_cast<int>(level);

    if (access_level_ != user_level)
    {
        cerr << "[ERROR] Access level mismatch. " << access_level_
                  << "!=" << user_level << endl;
        return ACCESS_LEVEL_ERROR;
    }

    clog << "[SUCCESS] Access level test passed\n" << endl;

    return NONE;
}


Camera::CameraError Camera::RunConfigTests(int testPattern)
{
    // Test if CameraDevice was created
    if(camera_ == nullptr)
    {
        cerr << "[ERROR] Camera device could not be created" << endl;
        return CAM_NOT_CREATED;
    }

    
    // Config cam
    switch (testPattern)
    {
        case 1:
            cout << "[SUCCESS] Line counter test pattern is on " << endl;
            camera_->writeRegisters({{ "0xA026", 0x1000}}); // Running.G Edit
            break;
        case 2:
            cout << "[SUCCESS] Overflow counter test pattern is on" << endl; // Running.G Edit
            camera_->writeRegisters({{ "0xA026", 0x3000}}); 
            break;
        case 3:
            cout << "[SUCCESS] Alternating line counter and toggling constant test pattern is on" << endl;
            camera_->writeRegisters({{ "0xA026", 0x55A5}}); 
            camera_->writeRegisters({{ "0xA027", 0x1A5A}}); 
            break;
        case 4:
            cout << "[SUCCESS] Toggling constant test pattern is on" << endl;
            camera_->writeRegisters({{ "0xA026", 0x75A5}}); 
            camera_->writeRegisters({{ "0xA027", 0x1A5A}});
            break;
        case 0:
            cout << "### RESET REGISTER ###"<< endl;
            camera_->writeRegisters({{ "0xA026", 0x0555}}); // Running.G Edit it for Reset
            break;
    }
    return NONE;
    
}


class MyRawListener : public royale::IExtendedDataListener
{
    int depthImageNumber = 0;
    int arraySize = 38528;
    int firstPxlValue;
    list<int> testResult;
    const uint16_t* rawPixelArray;
    int rowNum = 172;
    int colNum = 224; 
    int counter = 0;
    int expectedArray[38528]; //for the matrix 172x224 -> array size 38528

    void onNewData (const royale::IExtendedData *data) override
    {   
        cout << "----- RETRIEVE PIXEL VALUES FROM CAMERA -----"<< endl;
        if (data->hasRawData())
        {
            const royale::RawData* rawData =  data->getRawData();

            // for (int rawFrameIdx = 0; rawFrameIdx < rawData->rawData.size(); rawFrameIdx++)
            for (int rawFrameIdx = 0; rawFrameIdx < 1; rawFrameIdx++)
            {

                //const uint16_t* rawPixelArray = rawData->rawData[rawFrameIdx];
                rawPixelArray = rawData->rawData[rawFrameIdx];

                for (int row = 0; row < rowNum; row++)
                {
                        for (int col = 0; col < colNum; col++)
                    {   
                        size_t rawPixelIdx = row * rawData->width + col;
                        testResult.push_back(rawPixelArray[rawPixelIdx]);  

                    }

                }
                firstPxlValue = rawData->rawData[0][0 * rawData->width + 0];

            }
        }


        //GENERATE EXPECTED LIST
        switch (testPattern)
        {
            case 1:
                // ! THIS MACHANISM IS DESIGNED FOR - LINE COUNTER TEST MODE; 
                expectedArray[0] = 0;

                for (counter = 0; counter < arraySize - 1 + 10; counter++)
                {
                    if (expectedArray[counter] < 0xDF)
                    { 
                        expectedArray[counter + 1] = expectedArray[counter] + 1; 
                    }
                    else
                    {
                        expectedArray[counter + 1] = 0;
                    } 
                }
                break;
        
            case 2:
                // ! THIS MACHANISM IS DESIGNED FOR - OVERFLOW TEST MODE
                expectedArray[0] = firstPxlValue;
                for (counter = 0; counter < arraySize - 1 + 10; counter++){
                    if (expectedArray[counter] < 0xFFF)
                    {
                        expectedArray[counter + 1] = expectedArray[counter] + 1; 
                    }
                    else
                    {
                        expectedArray[counter + 1] = 0;
                    } 
                }
                break;
        
            case 3:
                // ! THIS MACHANISM IS DESIGNED FOR - ALTERNATING LINE COUNTER AND TOGGLING TEST PATTERN
                while (counter != arraySize)
                {
                    for (int row = 0; row < rowNum; row++)
                    {
                        for (int col = 0; col < colNum; col++) 
                        {
                            if (row % 2 == 0) 
                            {
                                if (col % 2 == 0)
                                {
                                    expectedArray[counter] = 0x5a5;
                                }
                                else
                                {
                                    expectedArray[counter] = 0xa5a;
                                }
                                counter++;
                            }
                            else
                            {
                                expectedArray[counter] = col; 
                                counter++;
                            }
                        }
                    }
                }
                break;
        
            case 4:
                // ! THIS MACHANISM IS DESIGNED FOR - TOGGLING CONSTANT TEST PATTERN
                while (counter != arraySize)
                {
                    for (int row = 0; row < rowNum; row++)
                    {
                        for (int col = 0; col < colNum; col++) 
                        {
                            if (col % 2 == 0)
                            {
                                expectedArray[counter] = 0x5a5;
                            }
                            else
                            {
                                expectedArray[counter] = 0xa5a;
                            }
                            counter++;
                        }
                    }
                }
                break;

        }


        //COMPARE THE ACTUAL VALUES WITH EXPECTED VALUES
        ofstream outdata; // outdata is like cin
        int pointer = 0;
        cout << "Comparing actual data to expected data\n";
        outdata.open("Comparison.txt"); // opens the file

        if(!outdata ) 
        { // file couldn't be opened
            cerr << "Error: file could not be opened" << endl;
            exit(1);
        }
        for (auto i = testResult.begin(); i != testResult.end(); )
        {
            outdata << "At position: ";
            outdata << pointer << " || Act: " << hex << *i << " || Exp: " << hex << expectedArray[pointer] << "\n";
            if (*i != expectedArray[pointer])
            {
                cout << "\n[FAIL]" << endl;
                if(testPattern == 1) 
                {
                    cout << "Line counter test pattern" << endl;
                }
                else if (testPattern == 2)
                {
                    cout << "Overflow counter test pattern" << endl;
                }
                else if (testPattern == 3)
                {
                    cout << "Alternating line counter and toggling constant test pattern" << endl;
                }
                else if (testPattern == 4)
                {
                    cout << "Toggling constant test pattern" << endl;
                }
                cout << " || expected value is: " << hex << expectedArray[pointer];
                cout << " || at position: " << pointer << endl;
                cout << "Please see data in home/root/Comparison.txt" << endl;
                
                break;
            } 
            i++;
            pointer++;
            if (i == testResult.end())
            {
                cout << "\n[PASS] ";
                if(testPattern == 1) 
                {
                    cout << "Line counter test pattern" << endl;
                }
                else if (testPattern == 2)
                {
                    cout << "Overflow counter test pattern" << endl;
                }
                else if (testPattern == 3)
                {
                    cout << "Alternating line counter and toggling constant test pattern" << endl;
                }
                else if (testPattern == 4)
                {
                    cout << "Toggling constant test pattern" << endl;
                }
                else
                {
                    cout << "Default setting" << endl;
                }

                cout << "Actuall values are identical to expected values. Please see data in home/root/Comparison.txt" << endl;
            }
        } 

        outdata.close();
    }
    
};


int main(int argc, char **argv)
{
    int opt;
    // Default options
    options_t options = { VERSION, 15, "MODE_9_5FPS", 1};
    // std::string ACCESS_CODE = "d79dab562f13ef8373e906d919aec323a2857388";
    string ACCESS_CODE = "c715e2ca31e816b1ef17ba487e2a5e9efc6bbd7b";
    //CameraFactory factory;
    Camera cam;
    Camera::CameraError error;

    if (argc > 1) 
    {
        while ((opt = getopt(argc, argv, OPTSTR)) != -1) 
        {
            switch(opt) 
            {
                case 'v':
                cout << "Version: " << options.version << endl;
                exit(EXIT_FAILURE);
                break;
                case 'l':
                testPattern = 1;
                break;
                case 'o':
                testPattern = 2;
                break;
                case 'a':
                testPattern = 3;
                break;
                case 't':
                testPattern = 4;
                break;
                case 'h':
                //testPattern = 404;
                default:
                print_help();
                break;

            }
        }
    }
    else
    {
        cout << "Invalid input, please type 'roboctrl -r -h' for help." << endl;
        exit(EXIT_FAILURE);
        //std::cout << "Using Default Settings." << std::endl;
        //std::cout << "Streaming Time [seconds]: " << options.numSecondsToStream << std::endl;
        //std::cout << "Setting ToF Mode: " << options.test_mode << std::endl;
    }


    cout << "----- RUN ACCESS LEVEL TEST -----\n";
    // [Verification] Access Level Test
    if (!ACCESS_CODE.empty()) { error = cam.RunAccessLevelTests(3); }
    else { error = cam.RunAccessLevelTests(1); }
    if (EXIT_ON_ERROR && error != Camera::CameraError::NONE) { return error; }

    cout << "----- CONFIG CAMERA TO SPESIFIC TEST PATTERN -----\n";


    // [Set-up] Camera Config Test
    error = cam.RunConfigTests(testPattern);
    if (EXIT_ON_ERROR && error != Camera::CameraError::NONE) { return error; }


    // Windows requires that the application allocate these, not the DLL.
    //PlatformResources resources;

    // This is the data listener which will receive callbacks.  It's declared
    // before the cameraDevice so that, if this function exits with a 'return'
    // statement while the camera is still capturing, it will still be in scope
    // until the cameraDevice's destructor implicitly deregisters the listener.
    MyRawListener listener;

    // Check if we have the appropriate access level
    // (the following operations need Level 2 access)
    // if (royale::CameraManager::getAccessLevel (ROYALE_ACCESS_CODE_LEVEL2) < royale::CameraAccessLevel::L2)
    // {
    //     cerr << "Please insert the activation code for Level 2 into the define at the beginning of this program!" << endl;
    //     return 1;
    // }

    // this represents the main camera device object
    unique_ptr<royale::ICameraDevice> cameraDevice;

    // the camera manager will query for a connected camera

    CameraFactory factory;
    cameraDevice = factory.createCamera();

    // the camera device is now available and CameraManager can be deallocated here

    /*
    if(cameraDevice == nullptr)
    {
        cerr << "Cannot create the camera device" << endl;
        return 1;
        
    }
    cout << "Initialize devices end ok" << endl;
    */
    
    cout << "\n----- INITIALIZING CAMERA IT MAY TAKE A FEW SECONDS -----\n" << endl;
    // IMPORTANT: call the initialize method before working with the camera device
    if (cameraDevice->initialize() != royale::CameraStatus::SUCCESS)
    {
        cerr << "Cannot initialize the camera device" << endl;
        return 1;
    }

    if (cameraDevice->registerDataListenerExtended (&listener) != royale::CameraStatus::SUCCESS)
    {
        cerr << "Couldn't register the extended data listener" << endl;
        return 1;
    }

    // Set the callbackData you want to receive
    // (if you call cameraDevice->setCallbackData (CallbackData::Raw)
    // before initializing the camera Royale can also open cameras without
    // calibration data and return raw images)
    if (cameraDevice->setCallbackData (royale::CallbackData::Intermediate) != royale::CameraStatus::SUCCESS)
    {
        cerr << "Cannot set the callbackData" << endl;
        return 1;
    }

    // start capture mode
    if (cameraDevice->startCapture() != royale::CameraStatus::SUCCESS)
    {
        cerr << "Error starting the capturing" << endl;
        return 1;
    }

    // let the camera capture for some time
    this_thread::sleep_for (chrono::milliseconds (300)); //5 frames/s;


    // stop capture mode
    if (cameraDevice->stopCapture() != royale::CameraStatus::SUCCESS)
    {
        cerr << "Error stopping the capturing" << endl;
        return 1;
    }

    return 0;

}

