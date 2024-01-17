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
  24,  // D0  is P0.24 (RGB LED Red,   IO5)
  25,  // D1  is P0.25 (Microphone Data Out ,IO7)
  42,  // D2  is P1.10 (RX,         IO38) // Not in V2.0 design
   6,  // D3  is P0.06 (RGB LED Blue,       IO43)
  26,  // D4  is P0.26 (Microphone clock,  IO42)
  33,  // D5  is P1.01 (SD card MOSI,       IO35)SPI1
   4,  // D6  is P0.04 (A0- EDA, IO25)
  20,  // D7  is P0.20 (BMI270 Interrupt 2,  IO50)
  21,  // D8  is P0.21 (ADS1299 SCK ,      IO48)SPI2
  16,  // D9  is P0.16 (GPIO4,               IO4) // Not in V2.0 design, maybe use for button
  15,  // D10 is P0.15 (SCL,                 IO3)
  14,  // D11 is P0.14 (SDA,                 IO2)
  13,  // D12 is P0.13 (SD card SCK,         IO1) SPI1
  27,  // D13 is P0.27 (SD Card CD,          IO44) SPI1

  // D14 .. D31
  30,  // D14 is P0.30 (LED1,           IO24) // Not in V2.0 design
  29,  // D15 is P0.29 (PPG Interrupt,         IO23)
   5,  // D16 is P0.05 (FReset Botton   IO27) // Not in V2.0 design
  31,  // D17 is P0.31 (CTS,           IO20)  // Not in V2.0 design
   2,  // D18, is P0.02 (RTS,          IO18)  // Not in V2.0 design
  28,  // D19 is P0.28 (Fuel Gauge Int,           IO17)
  40,  // D20 is P1.08 (SD card MISO,             IO34)SPI1
  46,  // D21 is P1.14 (ADS1299 MOSI,             IO41)SPI2
  44,  // D22 is P1.12 (ADS1299 Clock select,     IO21)SPI2
  45,  // D23 is P1.13 (ADS1299 Chip select,      IO22)SPI2
  43,  // D24 is P1.11 (ADS1299 Reset,            IO39)SPI2
  17,  // D25 is P0.17 ( IO51)            // Not used in V2.0 design
  35,  // D26 is P1.03 (TX,       IO37)  // Not in V2.0 design
  19,  // D27 is P0.19 ( IO52) is not connected per schematic
  47,  // D28 is P1.15 (ADS1299 Data Ready  IO40)SPI2
  34,  // D29 is P1.02 (SD card Chip select  IO36)SPI1
  22,  // D30 is P0.22 ( IO49) //  // Not used in V2.0 design
  23,  // D31 is P0.23 (ADS1299 MISO IO50)SPI2
  11,  // D32 is P0.11 (BMI270 Interrup 1 IO32) 
   //3,  // DXX, is P0.03 (IO16) is not connected per schematic
  // 7,  // DXX P0.07 (IO45) is not connected per schematic
  // 8, // DXX is P0.08 (NA) not present in UBLOX
  // 9, // DXX is P0.09 (NFC1)
  // 10, // DXX is P0.10 (NFC2)
  //17,  // D25 is P0.17 ( IO51)
  //19,  // D27 is P0.19 ( IO52) is not connected per schematic
  // 37, // P1.05 is not connected per schematic
  // 38, // P1.06 is not connected per schematic
  // 39, // P1.07 is not connected per schematic
  // 41,  // P1.09 (IO33) is not connected per schematic
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}

