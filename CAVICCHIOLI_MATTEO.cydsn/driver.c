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
#include "project.h"  

static void RED_LED_SET(uint8_t redp, uint8_t redcom, uint8_t redcompmod);

static void GREEN_LED_SET(uint8_t greenp, uint8_t greencom, uint8_t greencompmod);

static void PWM_WriteCounter(void);




void RG_LED_Mod(Mod m) //ricevo in ingresso i parametri del PWM come MODN come specificato nel file mod.h 
{
    RED_LED_SET(m.redp, m.redcomp, m.redcompmod); 
    GREEN_LED_SET(m.greenp, m.greencomp, m.greencompmod); 
    PWM_WriteCounter();
    PWM_Start();
}

static void RED_LED_SET(uint8_t redp, uint8_t redcom, uint8_t redcompmod) //modifico pattern PWM_RED con le componenti di MODN utili
{ 
    PWM_RED_WritePeriod(redp);
    PWM_RED_WriteCompare(redcom);
    PWM_RED_SetCompareMode(redcompmod);
}

static void GREEN_LED_SET(uint8_t greenp, uint8_t greencom, uint8_t greencompmod) //modifico pattern PWM_GREEN con le componenti di MODN utili
{
    PWM_GREEN_WritePeriod(greenp);
    PWM_GREEN_WriteCompare(greencom);
    PWM_GREEN_SetCompareMode(greencompmod); 
}

static void PWM_WriteCounter(void)
{
    PWM_RED_WriteCounter(0);
    PWM_GREEN_WriteCounter(0);
}

void PWM_Stop(void)
{
    PWM_GREEN_Stop();
    PWM_RED_Stop();
}

void PWM_Start(void)
{
    PWM_GREEN_Start();
    PWM_RED_Start();
}


    

    
    
    
    


/* [] END OF FILE */
