#include "runLED.h"

void runLED(void)
{
	LED_Config(); 
	unsigned int i,j;
    char ledState;

	while(1)
	{
       //LED_SetState(ledState);       //����??LED
        //for(i=0; i<0x000FFFFF; i++);  //?������
        
        /* ����??��?��y?Y��|���� */
        //ledState <<= 1;               //?���̡����� ledState = ledState << 1;
        //ledState += 1;                //?���̡����� ledState = ledState + 1;
        //if(ledState == 0xFF)          //�̡�����??��?��?������???��������
       // {
            /* ?����DLED??����??��??? */
            //LED_SetState(0x00);    //LED??��?����
            //for(i=0; i<0x00FFFFFF; i++);  //?������
           // LED_SetState(0xFF);    //LED???��?e
            //for(i=0; i<0x000FFFFFF; i++);  //?������
            //LED_SetState(0x00);    //LED???��?e
           // for(i=0; i<0x000FFFFFF; i++);  //?������
            //LED_SetState(0xFF);    //LED???��?e
            //ledState = 0xFE;              //??D?����??����??��?���䨬?
					for(j=0;j<10;j++)
					{
					  ledState =  x[j];
						LED_SetState(ledState);
						for(i=0; i<0x000FFFFFF; i++);
					}
        //}
	}


}

