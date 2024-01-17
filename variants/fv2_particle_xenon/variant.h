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

#ifndef _VARIANT_FASCIA_PARTICLE_XENON_
#define _VARIANT_FASCIA_PARTICLE_XENON_

#define _PINNUM(port, pin)    ((port)*32 + (pin))

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (33)
#define NUM_DIGITAL_PINS     (33)
#define NUM_ANALOG_INPUTS    (1) // A0 is EDA
#define NUM_ANALOG_OUTPUTS   (0)

/*
 * Digital pins
 */
#define PIN_D0              (0)
#define PIN_D1              (1)
#define PIN_D2              (2)
#define PIN_D3              (3)
#define PIN_D4              (4)
#define PIN_D5              (5)
#define PIN_D6              (6)
#define PIN_D7              (7)
#define PIN_D8              (8)
#define PIN_D9              (9)
#define PIN_D10             (10)
#define PIN_D11             (11)
#define PIN_D12             (12)
#define PIN_D13             (13)
#define PIN_D14             (14)
#define PIN_D15             (15)
#define PIN_D16             (16)
#define PIN_D17             (17)
#define PIN_D18             (18)
#define PIN_D19             (19)
#define PIN_D20             (20)
#define PIN_D21             (21)
#define PIN_D22             (22)
#define PIN_D23             (23)
#define PIN_D24             (24)
#define PIN_D25             (25)
#define PIN_D26             (26)
#define PIN_D27             (27)
#define PIN_D28             (28)
#define PIN_D29             (29)
#define PIN_D30             (30)
#define PIN_D31             (31)

static const uint8_t D0  = PIN_D0 ;
static const uint8_t D1  = PIN_D1 ;
static const uint8_t D2  = PIN_D2 ;
static const uint8_t D3  = PIN_D3 ;
static const uint8_t D4  = PIN_D4 ;
static const uint8_t D5  = PIN_D5 ;
static const uint8_t D6  = PIN_D6 ;
static const uint8_t D7  = PIN_D7 ;
static const uint8_t D8  = PIN_D8 ;
static const uint8_t D9  = PIN_D9 ;
static const uint8_t D10 = PIN_D10;
static const uint8_t D11 = PIN_D11;
static const uint8_t D12 = PIN_D12;
static const uint8_t D13 = PIN_D13;
static const uint8_t D14 = PIN_D14;
static const uint8_t D15 = PIN_D15;
static const uint8_t D16 = PIN_D16;
static const uint8_t D17 = PIN_D17;
static const uint8_t D18 = PIN_D18;
static const uint8_t D19 = PIN_D19;
static const uint8_t D20 = PIN_D20;
static const uint8_t D21 = PIN_D21;
static const uint8_t D22 = PIN_D22;
static const uint8_t D23 = PIN_D23;
static const uint8_t D24 = PIN_D24;
static const uint8_t D25 = PIN_D25;
static const uint8_t D26 = PIN_D26;
static const uint8_t D27 = PIN_D27;
static const uint8_t D28 = PIN_D28;
static const uint8_t D29 = PIN_D29;
static const uint8_t D30 = PIN_D30;
static const uint8_t D31 = PIN_D31;
// LEDs
#define LEDS_NUMBER    4
#define LED_STATE_ON   1

#define BOARD_RGB_BRIGHTNESS 0x202020

#define PIN_LED1             (29)
#define LED_BUILTIN          PIN_LED1

static const uint8_t LED_RGB_RED   = (23); //green
static const uint8_t LED_RGB_GREEN = (22); //red
static const uint8_t LED_RGB_BLUE  = (24);

// Buttons
#define BUTTONS_NUMBER 1
#define BUTTON_DFU                 (30)
#define BUTTON_FRESET              (31)
#define BUTTON_PULL    NRF_GPIO_PIN_PULLUP

static const uint8_t BUTTON_MODE =  BUTTON_DFU;


// NFC
#define NFC1                        (32)
#define NFC2                        (33)

/*
 * Analog pins
 */
#define PIN_A0                      (34)


static const uint8_t A0 = PIN_A0;

#define ADC_RESOLUTION    14


/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX         22
#define PIN_SERIAL1_TX         23
#define PIN_SERIAL1_CTS        24
#define PIN_SERIAL1_RTS        25


/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 2

#define PIN_SPI_SS                  4  // SD CARD SS
#define PIN_SPI_MISO                5  // SD CARD MISO
#define PIN_SPI_MOSI                3  // SD CARD MOSI
#define PIN_SPI_SCK                 7  // SD CARD SCK

#define PIN_SPI1_SS                 9  // ADS1299 CS
#define PIN_SPI1_MISO               12 // ADS1299 MISO
#define PIN_SPI1_MOSI               11 // ADS1299 MOSI
#define PIN_SPI1_SCK                10 // ADS1299 SCK

static const uint8_t SS   = PIN_SPI_SS;
static const uint8_t MOSI = PIN_SPI_MOSI;
static const uint8_t MISO = PIN_SPI_MISO;
static const uint8_t SCK  = PIN_SPI_SCK;

static const uint8_t SS1   = PIN_SPI1_SS;
static const uint8_t MOSI1 = PIN_SPI1_MOSI;
static const uint8_t MISO1 = PIN_SPI1_MISO;
static const uint8_t SCK1  = PIN_SPI1_SCK;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 2

#define PIN_WIRE_SDA               0
#define PIN_WIRE_SCL               1
#define PIN_WIRE_SDA1              24
#define PIN_WIRE_SCL1              25

#define USB_MSC_BLOCK_SIZE    512
#define USB_MSC_BLOCK_COUNT   ((2*1024*1024) / USB_MSC_BLOCK_SIZE)


#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
