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
#ifndef __RG_LED_DRIVER_H__
    #define __RG_LED_DRIVER_H__
    
    #include "cytypes.h"
    
    typedef struct {
        uint8_t red;
        uint8_t green;
    } Color;
    
    void RG_LED_Start();
    void RG_LED_Stop();
    void RG_LED_Writecolor(Color c);
     
#endif
    
/* [] END OF FILE */
