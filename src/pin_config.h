// MIT License
//
// Copyright (c) 2022 Happy GardenPI
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.


#ifndef _HDG_PIN_CONFIG_
#define _HDG_PIN_CONFIG_

#define HGD_BUTTON_PIN      5 //!< Button pin

#define HGD_RELEAY_IN1_PIN  22 //!< Releay port 1
#define HGD_RELEAY_IN2_PIN  24 //!< Releay port 2
#define HGD_RELEAY_IN3_PIN  26 //!< Releay port 3
#define HGD_RELEAY_IN4_PIN  28 //!< Releay port 4

#define HGD_LCD_RS_PIN      26 //!< Register select  
#define HGD_LCD_E_PIN       19 //!< Enable
#define HGD_LCD_BL_PIN      23 //!< Balcklighting anode
#define HGD_LCD_D4_PIN      33 //!< Bit 0
#define HGD_LCD_D5_PIN      31 //!< Bit 1
#define HGD_LCD_D6_PIN      29 //!< Bit 2
#define HGD_LCD_D7_PIN      27 //!< Bit 3

/**
 * @brief Init pin configuration
 * 
 * @return true init correctly
 * @return false some error
 */
_Bool init_pin_config(void);

#endif
