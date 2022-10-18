/****************************************************************************\
* Copyright (C) 2016 Infineon Technologies
*
* THIS CODE AND INFORMATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
* KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
* IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A
* PARTICULAR PURPOSE.
*
\****************************************************************************/

#pragma once

#include <config/ModuleConfig.hpp>

namespace royale
{
    namespace config
    {
        /**
        * The module configurations are not exported directly from the library.
        * The full list is available via royale::config::getUsbProbeDataRoyale()
        */
        namespace moduleconfig
        {
            /**
            * Configuration for the PicoFlexx with Enclustra firmware.
            */
            extern const royale::config::ModuleConfig PicoFlexxU6;

            /**
            * Configuration for pico monstar 850nm rev 4 with glass lens (2019 batch)
            */
            extern const royale::config::ModuleConfig PicoMonstar850nmGlass2;

            /**
            * Default configuration for pico monstar with only one calibration
            * use case
            */
            extern const royale::config::ModuleConfig PicoMonstarDefault;

            /**
            * Configuration for the Selene camera modules with ICM
            */
            extern const royale::config::ModuleConfig SeleneIcm;

            /**
            * Default configuration for the Selene camera modules that only
            * offers a calibration use case
            */
            extern const royale::config::ModuleConfig SeleneDefault;

            /**
            * Default configuration for an unknown pmd module (M2453 versions)
            */
            extern const royale::config::ModuleConfig PmdModule238xDefault;

            /**
            * Default configuration for an unknown pmd module (M2455 versions)
            */
            extern const royale::config::ModuleConfig PmdModule277xDefault;

            /**
            * Default configuration for an unknown pmd module (M2457 versions)
            */
            extern const royale::config::ModuleConfig PmdModule287xDefault;

            /**
            * Configuration for X1.1 850nm 2W
            * also known as the A65.1
            */
            extern const royale::config::ModuleConfig X1_18502W;

            /**
            * Configuration for X1.2
            * also known as the A65rev3
            */
            extern const royale::config::ModuleConfig X1_2;

            /**
            * Default configuration for X1
            */
            extern const royale::config::ModuleConfig X1Default;

            /**
            * Default configuration for the Europa 2 camera modules
            */
            extern const royale::config::ModuleConfig EuropaDefault;

            /**
            * Configuration for the Europa 2 camera modules with full image circle
            */
            extern const royale::config::ModuleConfig Europa2Full;

            /**
            * Configuration for the Europa 2 camera modules with half image circle
            */
            extern const royale::config::ModuleConfig Europa2Half;
        }
    }
}
