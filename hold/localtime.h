/* Copyright (C) 2019 Lee C. Bussy (@LBussy)

This file is part of Lee Bussy's Brew Bubbles (Brew-Bubbles).

Brew Bubbles is free software: you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation, either version 3 of the License, or (at your
option) any later version.

Brew Bubbles is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU 
General Public License for more details.

You should have received a copy of the GNU General Public License along
with Brew Bubbles. If not, see <https://www.gnu.org/licenses/>. */

#ifndef _LOCALTIME_H
#define _LOCALTIME_H

#include "config.h"
#include <ESP8266WiFi.h>
#include <WifiUDP.h>
#include <NTPClient.h>
#include <Time.h>
#include <TimeLib.h>
#include <Timezone.h>

class LocalTime {
    private:
        // Singleton Declarations
        static bool instanceFlag;
        static LocalTime *single;
        LocalTime();
        // Other Declarations
        NTPClient timeClient(WiFiUDP, const char*, int, int);

    public:
        // Singleton Declarations
        static LocalTime* getInstance();
        ~LocalTime();
        // Other Declarations
        void Update();
        char* GetLocalTime();
};

#endif // _LOCALTIME_H