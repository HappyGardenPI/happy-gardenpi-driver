/* 
 * This file is part of the Happy GardenPI distribution (https://github.com/HappyGardenPI/happy-gardenpi-driver).
 * Copyright (c) 2022 Antonio Salsi.
 * 
 * This program is free software: you can redistribute it and/or modify  
 * it under the terms of the GNU General Public License as published by  
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of 
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License 
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */



#ifndef _HDG_ERROR_
#define _HDG_ERROR_

#include <linux/kernel.h>

#define MSG_LEN_ERROR_HGD (30)

/**
 * @brief Error code 
 */
typedef enum 
{
    HGD_ERROR_NONE,
    HGD_ERROR_GPIO_NOT_VALID = 0x01,
    HGD_ERROR_GPIO_REQUEST,
    HGD_ERROR_SYS_INFO_SYSFS_CREATE,
    HGD_ERROR_SYS_INFO_SYSFS_NO_VHEAP,
    
} hgd_error_code_t;

/**
 * @brief Error structure
 */
typedef struct
{
    hgd_error_code_t code;          //!< Error code
    char msg[MSG_LEN_ERROR_HGD];    //!< Error message
} hgd_error_t;

/**
 * @brief Build new error
 * 
 * @param error 
 * @return 0 ok 
 * @return 0 error 
 */
bool hgd_error_new(hgd_error_t** error, hgd_error_code_t code, const char* msg);

/**
 * @brief Prinnt and free error
 * 
 * @param error to print
 * @param msg addtidional message to add if NULL not print nothing
 * @param free 0 not free
 */
void hgd_error_print(hgd_error_t* error, const char* msg, bool free);

/**
 * @brief Gel last error
 * 
 * @return const hgd_error_t* NULL il no error occured
 */
const hgd_error_t * hgd_erro_get_last(void);

/**
 * @brief Free a rerro
 * 
 * @param error to free
 */
void hgd_error_free(hgd_error_t** error);

#endif