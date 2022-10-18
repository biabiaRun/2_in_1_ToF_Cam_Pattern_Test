/****************************************************************************\
* Copyright (C) 2018 pmdtechnologies ag
*
* THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
* KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
\****************************************************************************/

#include <modules/ModuleConfigPmdModuleCommon.hpp>
#include <modules/CommonProcessingParameters.hpp>

const ModuleConfig royale::config::moduleconfig::PmdModule238xDefault
{
    royale::config::CoreConfig
    {
        { 112, 86 },
        { 224, 172 },
        royale::usecase::UseCaseList{
            royale::usecase::UseCaseList{
                royale::usecase::UseCase{
                    "MODE_CALIBRATION",
                    std::make_shared<pmdModule::NameIsIdentifierUseCaseCalibration> ("{4cdd2641-c71c-4782-a7d4-d33367685903}",
                    5u, royale::Pair<uint32_t, uint32_t> { 1u, 1500u }, 1200u),
                    { royale::moduleconfig::CommonProcessingParams2Frequencies },
                    royale::CallbackData::Raw,
                    royale::CameraAccessLevel::L3
                },

            },
        },
        royale::config::BandwidthRequirementCategory::USB3_THROTTLING,
        royale::config::FrameTransmissionMode::SUPERFRAME,
        "UnknownPmdModule238x",
        65.0f,
        60.0f,
        true
    },
    pmdModule238x::imagerConfig,
    pmdModule::illuConfig,
    pmdModule::tempsensorConfig,
    pmdModule::flashConfig,
    pmdModule::sensorMap
};
