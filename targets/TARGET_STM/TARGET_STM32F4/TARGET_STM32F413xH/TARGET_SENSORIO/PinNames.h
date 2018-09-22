/* mbed Microcontroller Library
 *******************************************************************************
 * Copyright (c) 2018, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *******************************************************************************
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ALT0  = 0x100,
    ALT1  = 0x200,
    ALT2  = 0x300,
    ALT3  = 0x400
} ALTx;

typedef enum {
    PA_0        = 0x00,
    PA_1        = 0x01,
    PA_2        = 0x02,
    PA_2_ALT0   = PA_2 | ALT0,
    PA_2_ALT1   = PA_2 | ALT1,
    PA_3        = 0x03,
    PA_3_ALT0   = PA_3 | ALT0,
    PA_3_ALT1   = PA_3 | ALT1,
    PA_4        = 0x04,
    PA_4_ALT0   = PA_4 | ALT0,
    PA_5        = 0x05,
    PA_5_ALT0   = PA_5 | ALT0,
    PA_6        = 0x06,
    PA_6_ALT0   = PA_6 | ALT0,
    PA_7        = 0x07,
    PA_7_ALT0   = PA_7 | ALT0,
    PA_7_ALT1   = PA_7 | ALT1,
    PA_7_ALT2   = PA_7 | ALT2,
    PA_8        = 0x08,
    PA_9        = 0x09,
    PA_10       = 0x0A,
    PA_10_ALT0  = PA_10 | ALT0,
    PA_11       = 0x0B,
    PA_12       = 0x0C,
    PA_12_ALT0  = PA_12 | ALT0,
    PA_13       = 0x0D,
    PA_14       = 0x0E,
    PA_15       = 0x0F,
    PA_15_ALT0  = PA_15 | ALT0,

    PB_0        = 0x10,
    PB_0_ALT0   = PB_0 | ALT0,
    PB_0_ALT1   = PB_0 | ALT1,
    PB_1        = 0x11,
    PB_1_ALT0   = PB_1 | ALT0,
    PB_1_ALT1   = PB_1 | ALT1,
    PB_2        = 0x12,
    PB_3        = 0x13,
    PB_3_ALT0   = PB_3 | ALT0,
    PB_4        = 0x14,
    PB_4_ALT0   = PA_4 | ALT0,
    PB_5        = 0x15,
    PB_5_ALT0   = PB_5 | ALT0,
    PB_6        = 0x16,
    PB_6_ALT0   = PB_6 | ALT0,
    PB_7        = 0x17,
    PB_8        = 0x18,
    PB_8_ALT0   = PB_8 | ALT0,
    PB_9        = 0x19,
    PB_9_ALT0   = PB_9 | ALT0,
    PB_10       = 0x1A,
    PB_10_ALT0   = PB_10 | ALT0,
    PB_11       = 0x1B,
    PB_12       = 0x1C,
    PB_12_ALT0  = PB_12 | ALT0,
    PB_13       = 0x1D,
    PB_13_ALT0  = PB_13 | ALT0,
    PB_14       = 0x1E,
    PB_14_ALT0  = PB_14 | ALT0,
    PB_14_ALT1  = PB_14 | ALT1,
    PB_15       = 0x1F,
    PB_15_ALT0  = PB_15 | ALT0,
    PB_15_ALT1  = PB_15 | ALT1,

    PC_0        = 0x20,
    PC_1        = 0x21,
    PC_2        = 0x22,
    PC_3        = 0x23,
    PC_4        = 0x24,
    PC_5        = 0x25,
    PC_6        = 0x26,
    PC_6_ALT0   = PC_6 | ALT0,
    PC_7        = 0x27,
    PC_7_ALT0   = PC_7 | ALT0,
    PC_8        = 0x28,
    PC_8_ALT0   = PC_8 | ALT0,
    PC_9        = 0x29,
    PC_9_ALT0   = PC_9 | ALT0,
    PC_10       = 0x2A,
    PC_11       = 0x2B,
    PC_11_ALT0  = PC_11 | ALT0,
    PC_12       = 0x2C,
    PC_13       = 0x2D,
    PC_14       = 0x2E,
    PC_15       = 0x2F,

    PD_0        = 0x30,
    PD_1        = 0x31,
    PD_2        = 0x32,
    PD_3        = 0x33,
    PD_4        = 0x34,
    PD_5        = 0x35,
    PD_6        = 0x36,
    PD_7        = 0x37,
    PD_8        = 0x38,
    PD_9        = 0x39,
    PD_10       = 0x3A,
    PD_11       = 0x3B,
    PD_12       = 0x3C,
    PD_13       = 0x3D,
    PD_14       = 0x3E,
    PD_15       = 0x3F,

    PE_0        = 0x40,
    PE_1        = 0x41,
    PE_2        = 0x42,
    PE_2_ALT0   = PE_2 | ALT0,
    PE_3        = 0x43,
    PE_4        = 0x44,
    PE_4_ALT0   = PE_4 | ALT0,
    PE_5        = 0x45,
    PE_5_ALT0   = PE_5 | ALT0,
    PE_6        = 0x46,
    PE_6_ALT0   = PE_6 | ALT0,
    PE_7        = 0x47,
    PE_8        = 0x48,
    PE_9        = 0x49,
    PE_10       = 0x4A,
    PE_11       = 0x4B,
    PE_11_ALT0  = PE_11 | ALT0,
    PE_12       = 0x4C,
    PE_12_ALT0  = PE_12 | ALT0,
    PE_13       = 0x4D,
    PE_13_ALT0  = PE_13 | ALT0,
    PE_14       = 0x4E,
    PE_14_ALT0  = PE_14 | ALT0,
    PE_15       = 0x4F,

    PF_0        = 0x50,
    PF_1        = 0x51,
    PF_2        = 0x52,
    PF_3        = 0x53,
    PF_4        = 0x54,
    PF_5        = 0x55,
    PF_6        = 0x56,
    PF_7        = 0x57,
    PF_8        = 0x58,
    PF_9        = 0x59,
    PF_10       = 0x5A,
    PF_11       = 0x5B,
    PF_12       = 0x5C,
    PF_13       = 0x5D,
    PF_14       = 0x5E,
    PF_15       = 0x5F,

    PG_0        = 0x60,
    PG_1        = 0x61,
    PG_2        = 0x62,
    PG_3        = 0x63,
    PG_4        = 0x64,
    PG_5        = 0x65,
    PG_6        = 0x66,
    PG_7        = 0x67,
    PG_8        = 0x68,
    PG_9        = 0x69,
    PG_10       = 0x6A,
    PG_11       = 0x6B,
    PG_12       = 0x6C,
    PG_13       = 0x6D,
    PG_14       = 0x6E,
    PG_15       = 0x6F,

    PH_0        = 0x70,
    PH_1        = 0x71,

    /**** ADC internal channels ****/
    ADC_TEMP    = 0xF0,
    ADC_VREF    = 0xF1,
    ADC_VBAT    = 0xF2,

    /**** Arduino connector names ****/
    A0          = PC_0,
    A1          = PC_0,
    A2          = PC_0,
    A3          = PC_0,
    A4          = PB_4,  // I2C3_SDA
    A5          = PA_8,  // I2C3_SCL
    D0          = PA_1,
    D1          = PA_0,
    D2          = PF_9,
    D3          = PA_2,
    D4          = PF_10,
    D5          = PA_3,
    D6          = PB_10,
    D7          = PF_11,
    D8          = PF_12,
    D9          = PB_11, // TIM2_CH4
    D10         = PA_11, // SPI2_CS
    D11         = PA_10, // SPI2_MOSI
    D12         = PA_12, // SPI2_MISO
    D13         = PA_9,  // SPI2_CLK
    D14         = A4,
    D15         = A5,

    /**** Arduino analog multiplexer
        ARD_MUX_A   ARD_MUX_B   ARD_MUX_C   Mode
            0           0           0       A0
            0           0           1       A1
            0           1           0       A2
            0           1           1       A3
            1           0           0       A4*
            1           0           1       A5*
            1           1           0       CALIB_HIGH**
            1           1           1       CALIB_LOW**

        * Pins A4 and A5 are internally connected to D14 and D15
          in some shields, therefore, remember to configure D14 (PB4) and D15 (PA8)
          in high impedance mode (set as INPUT) to use these analog inputs

        ** MUX values 6 and 7 can be used to calibrate the Analog Inputs
           to the Max and Min values respectively.
    ****/
    ARD_MUX_A   = PG_6,
    ARD_MUX_B   = PG_7,
    ARD_MUX_C   = PG_8,

    /**** Grove I2C (IC2_FMP1) ****/
    GROVE_SCL   = PF_14,
    GROVE_SDA   = PF_15,

    /**** Grove 1 connector names ****/
    GROVE1_TX       = PE_1,  // UART 8 TX
    GROVE1_RX       = PE_0,  // UART 8 RX
    GROVE1_P1_PWM   = PD_14, // TIM4_CH3
    GROVE1_P2_PWM   = PD_15, // TIM4_CH4
    GROVE1_AI1      = PC_3,
    GROVE1_AI2      = PC_4,  // ADC1_IN14

    /**** Grove 1 multiplexer pins
        GROVE1_MUX_A    GROVE1_MUX_B    Mode
            0               0           PWM
            1               1           UART
            1               0           I2C
            1               1           ANALOG_IN
    ****/
    GROVE1_MUX_A    = PD_10,
    GROVE1_MUX_B    = PD_11,

    /**** Grove 1 3V3/5V switch pin
        GROVE1_SW_5V    VCC
            0           3.3V (default)
            1           5V
    ****/
    GROVE1_SW_5V = PG_9,

    /**** Grove 2 connector names ****/
    GROVE2_TX       = PG_1,  // UART 9 TX
    GROVE2_RX       = PG_0,  // UART 9 RX
    GROVE2_P1_PWM   = PD_12, // TIM4_CH1
    GROVE2_P2_PWM   = PD_13, // TIM4_CH2
    GROVE2_AI1      = PB_0,
    GROVE2_AI2      = PC_5,  // ADC1_IN15

    /**** Grove 2 multiplexer pins
        GROVE2_MUX_A    GROVE2_MUX_B    Mode
            0               0           PWM
            1               1           UART
            1               0           I2C
            1               1           ANALOG_IN
    ****/
    GROVE2_MUX_A    = PG_4,
    GROVE2_MUX_B    = PG_5,

    /**** Grove 1 3V3/5V switch pin
        GROVE1_SW_5V    VCC
            0           3.3V (default)
            1           5V
    ****/
    GROVE2_SW_5V = PG_10,

    /**** mikroBUS I2C (I2C1) ****/
    MB_I2C_SCL  = PF_14,
    MB_I2C_SDA  = PF_15,

    /**** mikroBUS SPI (SPI5) ****/
    MB_SPI_MOSI = PE_14,
    MB_SPI_MISO = PE_13,
    MB_SPI_CLK  = PE_12,

    /**** mikroBUS 1 connector names ****/
    MB1_AN      = PC_1,
    MB1_RST     = PG_14,
    MB1_CS      = PB_1,
    MB1_CLK     = MB_SPI_CLK,
    MB1_MISO    = MB_SPI_MISO,
    MB1_MOSI    = MB_SPI_MOSI,
    MB1_PWM     = PB_14,       // TIM12_CH1
    MB1_INT     = PD_0,
    MB1_RX      = PF_6,        // UART 7 RX
    MB1_TX      = PF_7,        // UART 7 TX
    MB1_SCL     = MB_I2C_SCL,
    MB1_SDA     = MB_I2C_SDA,

    /**** mikroBUS 2 connector names ****/
    MB2_AN      = PC_2,
    MB2_RST     = PG_15,
    MB2_CS      = PE_11,
    MB2_CLK     = MB_SPI_CLK,
    MB2_MISO    = MB_SPI_MISO,
    MB2_MOSI    = MB_SPI_MOSI,
    MB2_PWM     = PB_15,       // TIM12_CH2
    MB2_INT     = PC_6,
    MB2_RX      = PB_12,       // UART 5 RX
    MB2_TX      = PB_13,       // UART 5 TX
    MB2_SCL     = MB_I2C_SCL,
    MB2_SDA     = MB_I2C_SDA,

    /**** STDIO for console print ****/
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    STDIO_UART_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    STDIO_UART_TX = PD_8,
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    STDIO_UART_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    STDIO_UART_RX = PD_9,
#endif

    /**** Generic signals names ****/
    RGB_RED     = PF_3,      // TIM5_CH1
    RGB_GREEN   = PF_4,      // TIM5_CH2
    RGB_BLUE    = PF_5,      // TIM5_CH3
    LED1        = RGB_GREEN, // Green
    LED2        = RGB_BLUE,  // Blue
    LED3        = RGB_RED,   // Red
    LED4        = LED1,
    LED_RED     = LED3,
    USER_BUTTON = PC_13,
    BUTTON1     = USER_BUTTON,

    /**** STDIO names ****/
    SERIAL_TX   = STDIO_UART_TX,
    SERIAL_RX   = STDIO_UART_RX,
    USBTX       = STDIO_UART_TX,
    USBRX       = STDIO_UART_RX,

    /**** Common buses ****/
    I2C_SCL     = D15, // I2C3_SCL
    I2C_SDA     = D14, // I2C3_SDA
    SPI_MOSI    = D11, // SPI2_MOSI
    SPI_MISO    = D12, // SPI2_MISO
    SPI_SCK     = D13, // SPI2_CLK
    SPI_CS      = D10, // SPI2_CS
    PWM_OUT     = D9,  // TIM2_CH4

    /**** OSCILLATOR pins ****/
    RCC_OSC32_IN  = PC_14,
    RCC_OSC32_OUT = PC_15,
    RCC_OSC_IN    = PH_0,
    RCC_OSC_OUT   = PH_1,

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK   = PA_14,
    SYS_JTDI         = PA_15,
    SYS_JTDO_SWO     = PB_3,
    SYS_JTMS_SWDIO   = PA_13,
    SYS_JTRST        = PB_4,
    SYS_TRACECLK     = PE_2,
    SYS_TRACED0      = PE_3,
    SYS_TRACED0_ALT0 = PF_6,
    SYS_TRACED1      = PE_4,
    SYS_TRACED1_ALT0 = PF_7,
    SYS_TRACED1_ALT1 = PD_3,
    SYS_TRACED2      = PE_5,
    SYS_TRACED2_ALT0 = PG_13,
    SYS_TRACED3      = PE_6,
    SYS_TRACED3_ALT0 = PG_14,
    SYS_WKUP1        = PA_0,
    SYS_WKUP2        = PC_0,
    SYS_WKUP3        = PC_1,

    /**** WiFi pins (SPI1) ****/
    CC_SPI_CS   = PA_4,
    CC_SPI_CLK  = PA_5,
    CC_SPI_MISO = PA_6,
    CC_SPI_MOSI = PA_7,
    CC_NRESET   = PE_8,
    CC_IRQ      = PE_9,
    CC_RESTORE  = PE_10,

    /**** SDIO pins for uSD card ****/
    uSD_CMD = PD_2,
    uSD_CLK = PC_12,
    uSD_D0  = PC_8,
    uSD_D1  = PC_9,
    uSD_D2  = PC_10,
    uSD_D3  = PC_11,
    uSD_CD  = uSD_D3,

    /**** Onboard sensors I2C (I2C2) ****/
    SENSORS_SDA = PF_0,
    SENSORS_SCL = PF_1,

    /**** OLED pins (SPI4) ****/
    OLED_CLK   = PE_2,
    OLED_RESET = PE_3,
    OLED_CS    = PE_4,
    OLED_DC    = PE_5,
    OLED_MOSI  = PE_6,

    /**** Relay pins ****/
    RELAY_1 = PG_2,
    RELAY_2 = PG_3,

    /**** Light sensor (LTR303) interrupt pin ****/
    LTR303_INT = PG_13,

    /**** Accelerometer (BMA253) interrupt pins ****/
    ACCEL_INT1  = PD_4,
    ACCEL_INT2  = PD_5,

    /**** Not connected ****/
    NC = (int)0xFFFFFFFF
} PinName;

#ifdef __cplusplus
}
#endif

#endif
