/* Copyright (C) 2019 Lee C. Bussy (@LBussy)

This file is part of Lee Bussy's Brew Bubbbles (brew-bubbles).

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE. */

#ifndef _WIFI_H
#define _WIFI_H

#include "main.h"
#include "config.h"
#include <ESP8266WiFi.h>        //ESP8266 Core WiFi Library
#include <DNSServer.h>          //Local DNS Server used for redirecting all requests to the configuration portal
#include <ESP8266WebServer.h>   //Local WebServer used to serve the configuration portal
#include <WiFiManager.h>        //https://github.com/tzapu/WiFiManager WiFi Configuration Magic

void wifiBlinker();
void doWiFi();
void doWiFi(bool);
void resetWifi();

// WiFiManager Callbacks
void apCallback(WiFiManager *myWiFiManager);
void configResetCallback();
void preSaveConfigCallback();
void saveConfigCallback();
void saveParamsCallback();
void webServerCallback();

bool isNullField(const char *);

#endif // _WIFI_H
