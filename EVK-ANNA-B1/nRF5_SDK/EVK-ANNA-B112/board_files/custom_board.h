/**
 * Copyright (c) 2014 - 2020, Nordic Semiconductor ASA
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form, except as embedded into a Nordic
 *    Semiconductor ASA integrated circuit in a product or a software update for
 *    such product, must reproduce the above copyright notice, this list of
 *    conditions and the following disclaimer in the documentation and/or other
 *    materials provided with the distribution.
 *
 * 3. Neither the name of Nordic Semiconductor ASA nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * 4. This software, with or without modification, must only be used with a
 *    Nordic Semiconductor ASA integrated circuit.
 *
 * 5. Any software provided in binary form under this license must not be reverse
 *    engineered, decompiled, modified and/or disassembled.
 *
 * THIS SOFTWARE IS PROVIDED BY NORDIC SEMICONDUCTOR ASA "AS IS" AND ANY EXPRESS
 * OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
 * OF MERCHANTABILITY, NONINFRINGEMENT, AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL NORDIC SEMICONDUCTOR ASA OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
 * GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT
 * OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

/**

Modified by u-blox 2020

*/
#ifndef BOARD_CUSTOM_H
#define BOARD_CUSTOM_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nrf_gpio.h"

// In this case PIN 25 is used as button SW1, if the green led
// should be used it is possible to defined that one instead.
#define LEDS_NUMBER    2

#define LED_1          27	// Red
#define LED_2          26	// Blue
//#define LED_3        25	// Green

#define LEDS_ACTIVE_STATE 0

#define LEDS_LIST { LED_1, LED_2 }

#define BSP_LED_0      LED_1
#define BSP_LED_1      LED_2

#define LEDS_INV_MASK  LEDS_MASK

#define BUTTONS_NUMBER 2

#define BUTTON_1       25	// SW1
#define BUTTON_2       24	// SW2
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

#define BUTTONS_ACTIVE_STATE 0

#define BUTTONS_LIST { BUTTON_1, BUTTON_2 }

#define BSP_BUTTON_0   BUTTON_1
#define BSP_BUTTON_1   BUTTON_2

#define RX_PIN_NUMBER  2
#define TX_PIN_NUMBER  3
#define CTS_PIN_NUMBER 19
#define RTS_PIN_NUMBER 11
#define HWFC           true


// Arduino board mappings
#define ARDUINO_SCL_PIN             16  // SCL signal pin (IO_15)
#define ARDUINO_SDA_PIN             15  // SDA signal pin (IO_14)

// Connector J4
#define ARDUINO_13_PIN              NRF_GPIO_PIN_MAP(0, 20)  // IO_45
#define ARDUINO_12_PIN              NRF_GPIO_PIN_MAP(0, 18)  // IO_16
#define ARDUINO_11_PIN              NRF_GPIO_PIN_MAP(0, 23)  // IO_37
#define ARDUINO_10_PIN              NRF_GPIO_PIN_MAP(0, 22)  // IO_36
#define ARDUINO_9_PIN               NRF_GPIO_PIN_MAP(0, 24)  // IO_38
#define ARDUINO_8_PIN               NRF_GPIO_PIN_MAP(0, 14)  // IO_13

// Connector J3
#define ARDUINO_7_PIN               NRF_GPIO_PIN_MAP(0, 9)   // IO_21
#define ARDUINO_6_PIN               NRF_GPIO_PIN_MAP(0, 10)  // IO_22
#define ARDUINO_5_PIN               NRF_GPIO_PIN_MAP(0, 26)  // IO_31, BLUE LED
#define ARDUINO_4_PIN               NRF_GPIO_PIN_MAP(0, 27)  // IO_29, RED LED
#define ARDUINO_3_PIN               NRF_GPIO_PIN_MAP(0, 11)  // UART_RTS
#define ARDUINO_2_PIN               NRF_GPIO_PIN_MAP(0, 19)  // UART_CTS
#define ARDUINO_1_PIN               NRF_GPIO_PIN_MAP(0, 3)   // UART_TXD
#define ARDUINO_0_PIN               NRF_GPIO_PIN_MAP(0, 2)   // UART_RXD

// Connector J2
#define ARDUINO_A0_PIN              NRF_GPIO_PIN_MAP(0, 4)   // IO_24
#define ARDUINO_A1_PIN              NRF_GPIO_PIN_MAP(0, 5)   // IO_23
#define ARDUINO_A2_PIN              NRF_GPIO_PIN_MAP(0, 28)  // IO_28
#define ARDUINO_A3_PIN              NRF_GPIO_PIN_MAP(0, 29)  // IO_27
#define ARDUINO_A4_PIN              NRF_GPIO_PIN_MAP(0, 30)  // IO_26, UART_DSR
#define ARDUINO_A5_PIN              NRF_GPIO_PIN_MAP(0, 31)  // IO_25, UART_DTR

// Connector J14
#define RASPBERRY_PI_3_PIN          NRF_GPIO_PIN_MAP(0, 15)  // IO_14
#define RASPBERRY_PI_5_PIN          NRF_GPIO_PIN_MAP(0, 16)  // IO_15
#define RASPBERRY_PI_13_PIN         NRF_GPIO_PIN_MAP(0, 14)  // IO_13
#define RASPBERRY_PI_19_PIN         NRF_GPIO_PIN_MAP(0, 31)  // IO_25
#define RASPBERRY_PI_21_PIN         NRF_GPIO_PIN_MAP(0, 9)   // IO_21
#define RASPBERRY_PI_23_PIN         NRF_GPIO_PIN_MAP(0, 05)  // IO_23
#define RASPBERRY_PI_27_PIN         NRF_GPIO_PIN_MAP(0, 29)  // IO_27
#define RASPBERRY_PI_29_PIN         NRF_GPIO_PIN_MAP(0, 27)  // IO_29
#define RASPBERRY_PI_31_PIN         NRF_GPIO_PIN_MAP(0, 26)  // IO_31
#define RASPBERRY_PI_33_PIN         NRF_GPIO_PIN_MAP(0, 11)  // UART_RTS
#define RASPBERRY_PI_35_PIN         NRF_GPIO_PIN_MAP(0, 19)  // UART_CTS
#define RASPBERRY_PI_37_PIN         NRF_GPIO_PIN_MAP(0, 23)  // IO_37

#define RASPBERRY_PI_8_PIN          RX_PIN_NUMBER            // UART_RX
#define RASPBERRY_PI_10_PIN         TX_PIN_NUMBER            // UART_TX
#define RASPBERRY_PI_12_PIN         NRF_GPIO_PIN_MAP(0, 21)  // RESET_N
#define RASPBERRY_PI_16_PIN         NRF_GPIO_PIN_MAP(0, 18)  // IO_16
//#define RASPBERRY_PI_18_PIN         NC
#define RASPBERRY_PI_22_PIN         NRF_GPIO_PIN_MAP(0, 10)  // IO_24
#define RASPBERRY_PI_24_PIN         NRF_GPIO_PIN_MAP(0, 04)  // IO_24
#define RASPBERRY_PI_26_PIN         NRF_GPIO_PIN_MAP(0, 30)  // IO_26
#define RASPBERRY_PI_28_PIN         NRF_GPIO_PIN_MAP(0, 28)  // IO_28
#define RASPBERRY_PI_32_PIN         NRF_GPIO_PIN_MAP(0, 25)  // IO_30
#define RASPBERRY_PI_36_PIN         NRF_GPIO_PIN_MAP(0, 22)  // IO_36
#define RASPBERRY_PI_38_PIN         NRF_GPIO_PIN_MAP(0, 24)  // IO_38
#define RASPBERRY_PI_40_PIN         NRF_GPIO_PIN_MAP(0, 23)  // IO_45

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}

#ifdef __cplusplus
}
#endif

#endif // BOARD_CUSTOM_H
