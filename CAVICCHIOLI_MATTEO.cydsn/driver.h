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

/* Funzione che serve per aggiornare il PWM ogni volta che viene premuto il tasto per cambiare modalità
*/
#ifndef __DRIVER_H__
    #define __DRIVER_H__
    
    #include "cytypes.h"
    
    /* Creazione di una struct per contenre tutte le info relative ai pattern da far esegiuire al PWM */
    
    typedef struct {
        uint8_t redp;
        uint8_t redcomp;
        uint8_t redcompmod;
        uint8_t greenp;
        uint8_t greencomp;
        uint8_t greencompmod;
    } Mod;
    
    /* Funzione di aggiornamento dei parametri del PWM */
    
    void RG_LED_Mod(Mod m);
    void PWM_Start(void);
    void PWM_Stop(void);
     
#endif
    
/* [] END OF FILE */
