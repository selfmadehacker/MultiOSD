/*
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef CONFIG_H_
#define CONFIG_H_

#define VERSION 0001

/*
 * Telemetry modules config
 */
#define TELEMETRY_MODULES_UAVTALK					// main telemetry module
#define TELEMETRY_MODULES_ADC_BATTERY				// read battery params from adc

/*
 * UAVTalk config
 */
#define UAVTALK_VERSION 0x20
#define UAVTALK_VERSION_RELEASE 141001
#define UAVTALK_BOARD CC3D
#define UAVTALK_GCSTELEMETRYSTATS_UPDATE_INTERVAL 500	// ms
#define UAVTALK_DEFAULT_BATTERY_LOW_VOLTAGE 9.9			// 3.3V/cell on 3S, REVO only

/*
 * UART config
 */
#define UART_STDIO					// fprintf
#define UART_BAUD_RATE 57600
#define UART_RX_BUFFER_SIZE 128
#define UART_TX_BUFFER_SIZE 128

/*
 * ADC config
 */
#define ADC_REF	ADC_REF_AVCC	// AVCC as voltage reference
#define ADC_REF_VOLTAGE 5.0		// 5V

/*
 * ADC battery
 */
#define ADC_BATTERY_UPDATE_INTERVAL 200				// ms

#define ADC_BATTERY_VOLTAGE_CHANNEL 6				// ADC6 19 pin
#define ADC_BATTERY_CURRENT_CHANNEL 7				// ADC7 22 pin

#define ADC_BATTERY_DEFAULT_CURRENT_SENSOR 1		// ADC current sensor enabled
#define ADC_BATTERY_DEFAULT_VOLTAGE_DIVIDER 4.0		// max 20V (5S)
#define ADC_BATTERY_DEFAULT_CURRENT_DIVIDER 18.0	// max 90A
#define ADC_BATTERY_DEFAULT_LOW_VOLTAGE 9.9			// 3.3V/cell on 3S

/*
 * TWI (I2C) config
 */
#define MTWI_TIMEOUT 50			// ms
#define MTWI_RX_BUFFER_SIZE 16

/*
 * SPI config
 */
#define SPI_PORT PORTB
#define SPI_DDR DDRB
#define SPI_SS_BIT PB2
#define SPI_MOSI_BIT PB3
#define SPI_MISO_BIT PB4
#define SPI_SCK_BIT PB5
#define SPI_CPOL 0		// Clock polarity: low when idle
#define SPI_CPHA 0		// Clock phase: leading edge
#define SPI_CLOCK 0		// Fosc / 4

/*
 * MAX7456 config
 */
#define MAX7456_DEFAULT_MODE MAX7456_MODE_PAL 	// default video mode, if jumper closed
#define MAX7456_DEFAULT_BRIGHTNESS 0x00			// 120% white, 0% black
#define MAX7456_EOL_CHAR '\n' 					// Special next row char

// ~CS (Chip Select) pin
#define MAX7456_SELECT_PORT PORTD
#define MAX7456_SELECT_DDR DDRD
#define MAX7456_SELECT_BIT PD6

// VSYNC port
#define MAX7456_VSYNC_PORT PORTD
#define MAX7456_VSYNC_PIN PIND
#define MAX7456_VSYNC_DDR DDRD
#define MAX7456_VSYNC_BIT PD2

// Video mode pin. High = PAL, low = autodetect
#define MAX7456_MODE_JUMPER_PORT PORTD
#define MAX7456_MODE_JUMPER_DDR DDRD
#define MAX7456_MODE_JUMPER_BIT PD3


#endif /* CONFIG_H_ */
