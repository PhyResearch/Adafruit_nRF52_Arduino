
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

#ifndef _VARIANT_FEATHER52840_
#define _VARIANT_FEATHER52840_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

#define USE_LFXO      // Board uses 32khz crystal for LF
// #define USE_LFRC    // Board uses RC for LF

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
#define NUM_ANALOG_INPUTS    (2)
#define NUM_ANALOG_OUTPUTS   (0)

// LEDs
#define PIN_LED1             (14)


#define LED_BUILTIN          PIN_LED1

#define LED_BLUE             PIN_LED1

#define LED_STATE_ON         1         // State when LED is litted

/*
 * Analog pins
 */
#define PIN_A0               (6)
#define PIN_A1               (16)


static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;

#define ADC_RESOLUTION    14

// Other pins

/*
 * IMU Interrupts
 */
#define PIN_IMU_INT1         (32)
#define PIN_IMU_INT2         (7)

/*
 * Battery Fuel Guage Interrupt
 */
#define PIN_BATT_ALRT        (19)
/*
 * PPG sensor Interrupt
 */
#define PIN_PPG_INT1         (15)
/*
 * SD Card Detect Pin
 */
#define PIN_SD_DET           (30)

/*
 * ADS1299 pins
*/
#define PIN_DRDY            (28)
#define PIN_CLKSEL          (22)
/*
 * Serial interfaces
 */
#define PIN_SERIAL1_RX       (2)
#define PIN_SERIAL1_TX       (26)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 2
 // SD Card
#define PIN_SPI_MISO         (20)
#define PIN_SPI_MOSI         (5)
#define PIN_SPI_SCK          (12)
#define PIN_SPI_SD_CS        (29)

static const uint8_t SS   = PIN_SPI_SD_CS;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;
// ADS1299
#define PIN_SPI1_MISO         (31)
#define PIN_SPI1_MOSI         (21)
#define PIN_SPI1_SCK          (8)
#define PIN_SPI1_CS        (23)

static const uint8_t SS1   = PIN_SPI1_CS;
static const uint8_t MOSI1 = PIN_SPI1_MOSI ;
static const uint8_t MISO1 = PIN_SPI1_MISO ;
static const uint8_t SCK1  = PIN_SPI1_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (11)
#define PIN_WIRE_SCL         (10)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
