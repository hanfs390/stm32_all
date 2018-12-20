#include "runLED.h"

void runLED(void)
{
	LED_Config(); 
	unsigned int i,j;
    char ledState;

	while(1)
	{
       //LED_SetState(ledState);       //¨¦¨¨??LED
        //for(i=0; i<0x000FFFFF; i++);  //?¨®¨º¡À
        
        /* ¨¢¡Â??¦Ì?¨ºy?Y¡ä|¨¤¨ª */
        //ledState <<= 1;               //?¨¤¦Ì¡À¨®¨² ledState = ledState << 1;
        //ledState += 1;                //?¨¤¦Ì¡À¨®¨² ledState = ledState + 1;
        //if(ledState == 0xFF)          //¦Ì¡À¨¢¡Â??¦Ì?¦Ì?¨¢¨¢¦Ì???¨ª¡¤¨º¡À
       // {
            /* ?¨´¨®DLED??¨¦¨¢??¨°??? */
            //LED_SetState(0x00);    //LED??¦Ì?¨¢¨¢
            //for(i=0; i<0x00FFFFFF; i++);  //?¨®¨º¡À
           // LED_SetState(0xFF);    //LED???¡§?e
            //for(i=0; i<0x000FFFFFF; i++);  //?¨®¨º¡À
            //LED_SetState(0x00);    //LED???¡§?e
           // for(i=0; i<0x000FFFFFF; i++);  //?¨®¨º¡À
            //LED_SetState(0xFF);    //LED???¡§?e
            //ledState = 0xFE;              //??D?¨¦¨¨??¨¢¡Â??¦Ì?¡Á¡ä¨¬?
					for(j=0;j<10;j++)
					{
					  ledState =  x[j];
						LED_SetState(ledState);
						for(i=0; i<0x000FFFFFF; i++);
					}
        //}
	}


}

