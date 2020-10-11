/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/

#include "driver.h"

//(period red, compare red, mode compare red, period green, compare green, mode compare green)

const Mod MOD1 = {255, 127, 2, 255, 127, 2}; // {127, 0, 2, 127, 0, 2};
const Mod MOD2 = {255, 127, 2, 127, 63, 2}; // {127, 0, 2, 127, 63, 2};
const Mod MOD3 = {127, 63, 4, 255, 127, 2}; // {127, 63, 4, 127, 0, 2};
const Mod MOD4 = {63, 31, 2, 63, 31, 4}; 
const Mod MOD5 = {31, 15, 4, 31, 15, 2}; 
const Mod MOD6 = {127, 31, 2, 127, 63, 2}; 
const Mod MOD7 = {127, 63, 4, 63, 31, 2}; 

/*a riguardo del riferimento del boss ho considerato che lui intendesse acceso a 1 e spento
a 0, di conseguenza avendo un led a common cathode, acceso basso, ho invertito tutti i pattern.  */

/*[] END OF FILE */
