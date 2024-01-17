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
#include "nrf_pwm.h"

const uint32_t g_ADigitalPinMap[] =
{
  // D0 .. D8
  _PINNUM(0, 14),   // D0 - P0.14 (IO02_SDA)
  _PINNUM(0, 15),   // D1 - P0.15 (IO03_SCL)
  _PINNUM(1, 0),    // D2 - P1.00 (IO08_USB_OTG) - USB OTG 
  _PINNUM(1, 1),    // D3 - P1.01 (IO35_SD_MOSI) - SD card MOSI
  _PINNUM(1, 2),    // D4 - P1.02 (IO36_SD_CS) - SD card Chip select
  _PINNUM(1, 8),    // D5 - P1.08 (IO34_SD_MISO) - SD card MISO
  _PINNUM(0, 27),   // D6 - P07 (IO44_SD_CD) - SD Card CD
  _PINNUM(0, 13),   // D7 - P0.13 (IO01_SD_SCK) - SD card SCK
  _PINNUM(0, 11),   // D8 - P0.11 (IO32_BMI_INT1) - BMI270 Interrupt 1

  // D9 .. D21
  _PINNUM(1, 13),   // D9  - P1.13 (IO22_ADS_CS) - ADS1299 Chip select
  _PINNUM(0, 21),   // D10 - P0.21 (IO48_ADS_SCK) - ADS1299 Clock
  _PINNUM(1, 14),   // D11 - P1.14 (IO41_ADS_MOSI) - ADS1299 MOSI
  _PINNUM(0, 23),   // D12 - P0.23 (IO47_ADS_MISO) - ADS1299 MISO
  _PINNUM(1, 15),   // D13 - P1.15 (IO40_ADS_DRDY) - ADS1299 Data Ready
  _PINNUM(1, 12),   // D14 - P1.12 (IO21_ADS_CLKSEL) - ADS1299 Clock select
  _PINNUM(1, 11),   // D15 - P1.11 (IO39_ADS_RST) - ADS1299 Reset
  _PINNUM(0, 29),   // D16 - P0.29 (IO23_PPG_INT) - PPG Interrupt
  _PINNUM(0, 28),   // D17 - P0.28 (IO17_FUEL_INT) - Fuel Gauge Interrupt
  _PINNUM(0, 26),   // D18 - P0.26 (IO42_PDMCLK) - Microphone clock
  _PINNUM(0, 25),   // D19 - P0.25 (IO7_PDMDIN) - Microphone Data Out
  _PINNUM(0, 18),   // D20 - P0.18 (RESETN) - RESET_N
  _PINNUM(0, 20),   // D21 - P0.20 (IO50_BMI_INT2) - BMI270 Interrupt 2
  _PINNUM(1, 10),   // D22 - P1.10 (IO38_RX) -UART Signal        //Not in V2.0 PCB
  _PINNUM(1, 3),    // D23 - P1.03 (IO37_TX) - UART Signal       //Not in V2.0 PCB
  _PINNUM(0, 31),   // D24 - P0.31 (IO16_CTS/SDA1) - UART Signal //Not in V2.0 PCB
  _PINNUM(0, 2),    // D25 - P0.02 (IO18_RTS/SCL1) - UART Signal //Not in V2.0 PCB

  // D26 .. D31 - LEDs - DFU button
  _PINNUM(0, 24), // D26 - P0.24 (IO5_RGB_LED_R) - RGB LED Red
  _PINNUM(0, 16), // D27 - P0.16 (IO4_RGB_LED_G) - RGB LED Green
  _PINNUM(0, 6),  // D28 - P0.06 (IO43_RGB_LED_B) - RGB LED Blue
  _PINNUM(0, 30), // D29 - P0.30 (IO24_RGB_LED_B) - LED1 red
  _PINNUM(0, 24), // D30 - P0.24 (MODE) - Button  for DFU
  _PINNUM(0, 5),  // D31 - P0.05 (FRset) - Button  for FRESEST

  // D32.. D33 - NFC
  _PINNUM(0, 9),  // D32 - P0.09 (u.FL FOR NFC ANTENNA)
  _PINNUM(0, 10), // D33 - P0.10 (u.FL FOR NFC ANTENNA)

  // D34- Analog Pins A0
  _PINNUM(0, 4),  // D34 - P0.04 (IO25A_EDA_SIG) - Analog Signal
};

void initVariant()
{
  // LED1
  pinMode(PIN_LED1, OUTPUT);
  ledOff(PIN_LED1);
}