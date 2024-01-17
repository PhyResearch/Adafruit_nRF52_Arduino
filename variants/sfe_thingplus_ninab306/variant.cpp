/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2018, Adafruit Industries (adafruit.com)

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"
#include "wiring_constants.h"
#include "wiring_digital.h"
#include "nrf.h"

const uint32_t g_ADigitalPinMap[] =
{
  // D0 .. D13
  24,  // D0  is P0.24 (UART RX,       IO5)
  25,  // D1  is P0.25 (UART TX,       IO7)
  42,  // D2  is P1.10 (Free,         IO38)
   6,  // D3  is P0.06 (SDA,          IO43)
  26,  // D4  is P0.26 (SCL,          IO42)
  33,  // D5  is P1.01 (GPIO6,        IO35)
   4,  // D6  is P0.04 (GPIO5,        IO25)
  20,  // D7  is P0.20 (PICO,         IO50)
  21,  // D8  is P0.21 (POCI,         IO48)
  16,  // D9  is P0.16 (GPIO4,         IO4)
  15,  // D10 is P0.15 (GPIO3,         IO3)
  14,  // D11 is P0.14 (GPIO2,         IO2)
  13,  // D12 is P0.13 (GPIO1,         IO1)
  27,  // D13 is P0.27 (GPIO0,        IO44)

  // D14 .. D21 (aka A0 .. A5)
  30,  // D14 is P0.30 (A0,           IO24)
  29,  // D15 is P0.29 (A1,           IO23)
   5,  // D16 is P0.05 (A2,           IO27)
  31,  // D17 is P0.31 (A3,           IO20)
   2,  // D18 is P0.02 (A4,           IO18)
  28,  // D19 is P0.28 (A5,           IO17)

  // LEDs
  40,  // D20 is P1.08 (RGB,          IO34)
  46,  // D21 is P1.14 (LED,          IO41)

  // ISM330DHCX IMU Interrupt Pins
  44,  // D22 is P1.12 (IMU_INT1,     IO21)
  45,  // D23 is P1.13 (IMU_INT2,     IO22)

  // Battery Fuel Guage Interrupt
  43,  // D24 is P1.11 (!BATT_ALRT!,  IO39)
  
  // SD Card Pins besides PICO/POCI
  17,  // D25 is P0.17 (SD_!CS!,      IO51)
  35,  // D26 is P1.03 (SD_DET,       IO37)
  19,  // D27 is P0.19 (SCK,          IO52)

  // Thus, there are 28 defined pins

  // The remaining pins are not connected (per schematic)
  //  7,      // P0.07 (IO45) is not connected per schematic
  //  3,      // P0.03 (IO16) is not connected per schematic
  //  9,      // P0.09 (IO28) is not connected per schematic
  // 10,      // P0.10 (IO29) is not connected per schematic
  // 11,      // P0.11 (IO32) is not connected per schematic
  // 12,      // P0.12 (IO46) is not connected per schematic
  // 32,      // P1.00  (IO8) is not connected per schematic
  // 34,      // P1.02 (IO36) is not connected per schematic
  // 41,      // P1.09 (IO33) is not connected per schematic
  // 47,      // P1.15 (IO40) is not connected per schematic
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

