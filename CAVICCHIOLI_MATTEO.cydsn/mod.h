/* ========================================
 *
 * Copyright Cavicchioli Matteo, 2020
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

const Mod MOD1 = {255, 0, 1, 255, 0, 1}; //giallo fisso 
const Mod MOD2 = {255, 0, 1, 255, 127, 1}; //1s giallo, 1s rosso
const Mod MOD3 = {255, 127, 3, 255, 0, 1}; //1s giallo, 1s verde
const Mod MOD4 = {127, 63, 1, 127, 63, 3};  //0,5s rosso, 0,5s verde
const Mod MOD5 = {63, 31, 3, 63, 31, 1};  //0,25s rosso, 0,25s verde
const Mod MOD6 = {255, 63, 1, 255, 127, 1}; //1s giallo, 0,5s rosso, 0,5s spento
const Mod MOD7 = {255, 127, 3, 127, 63, 1}; //0,5s x giallo,rosso,verde,spento



/*[] END OF FILE */
