/* mbed Microcontroller Library
 * Copyright (c) 2006-2015 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    PIN_INPUT,
    PIN_OUTPUT,
    PIN_INPUT_OUTPUT	//pin state can be set and read back
} PinDirection;

typedef enum {
    PA00  = 0,
    PA01  = 1,
    PA02  = 2,
    PA03  = 3,
    PA04  = 4,
    PA05  = 5,
    PA06  = 6,
    PA07  = 7,
    PA08  = 8,
    PA09  = 9,
    PA10  = 10,
    PA11  = 11,
    PA12  = 12,
    PA13  = 13,
    PA14  = 14,
    PA15  = 15,
    PA16  = 16,
    PA17  = 17,
    PA18  = 18,
    PA19  = 19,
    PA20  = 20,
    PA21  = 21,
    PA22  = 22,
    PA23  = 23,
    PA24  = 24,
    PA25  = 25,
    PA27  = 27,
    PA28  = 28,
    PA30  = 30,
    PA31  = 31,

    PB02  = 34,
    PB03  = 35,
    PB08  = 40,
    PB09  = 41,
    PB10  = 42,
    PB11  = 43,
    PB22  = 54,
    PB23  = 55,

    LIS_SDA = PA00,
    LIS_SCL = PA01,
    SPEAKER = PA02,
    A3 = PA04,
    A4 = PA05,
    D8 = PA06,
    D9 = PA07,

    SOUND_SENSE = PA08,
    TEMP_SENSE = PA09,
    LIS_IRQ = PA10,
    LIGHT = PA11,
    MISO = PA12,

    RIGHT_BUTTON = PA14,
    SLIDE_SWITCH = PA15,

    D11 = PA16,
    LED = PA17,
    D13 = PA17,
    D10 = PA18,
    D12 = PA19,
    D6 = PA20,
    D7 = PA21,

    CAPPUSH = PA22,
    D27 = PA23,
    D_MINUS = PA24,
    D_PLUS = PA25,
    TXLED = PA27,
    LEFT_BUTTON = PA28,
    SWCLK = PA30,
    SWDIO = PA31,

    SDA = PB02,
    SCL = PB03,
    TXD = PB08,
    RXD = PB09,
    MOSI = PB10,
    SCK = PB11,
    FLASH_CS = PB22,
    NEOPIX = PB23,

    // Not connected
    NC = (int)0xFFFFFFFF,

    USBTX = NC,
    USBRX = NC
} PinName;

typedef enum {
    PullNone = 0,
    PullUp = 1,
    PullDown = 2,
    PullDefault = PullUp
} PinMode;

#ifdef __cplusplus
}
#endif

#endif
