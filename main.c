#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL

#define LED0_AUS PORTD &= ~(1<<PD0);	//l�scht bit PD0
#define LED0_EIN PORTD |= (1<<PD0);		//setzt PD0

#define LED1_AUS PORTD &= ~(1<<PD1);	//l�scht bit PD1
#define LED1_EIN PORTD |= (1<<PD1);		//setzt PD1

#define LED2_AUS PORTD &= ~(1<<PD2);	//l�scht bit PD2
#define LED2_EIN PORTD |= (1<<PD2);		//setzt PD2

#define LED3_AUS PORTD &= ~(1<<PD3);	//l�scht bit PD3
#define LED3_EIN PORTD |= (1<<PD3);		//setzt PD3

#define LED4_AUS PORTD &= ~(1<<PD4);	//l�scht bit PD4
#define LED4_EIN PORTD |= (1<<PD4);		//setzt PD4

#define LED5_AUS PORTD &= ~(1<<PD5);	//l�scht bit PD5
#define LED5_EIN PORTD |= (1<<PD5);		//setzt PD5

#define LED6_AUS PORTD &= ~(1<<PD6);	//l�scht bit PD6
#define LED6_EIN PORTD |= (1<<PD6);		//setzt PD6

#define LED7_AUS PORTD &= ~(1<<PD7);	//l�scht bit PD7
#define LED7_EIN PORTD |= (1<<PD7);		//setzt PD7

int main(void)
{
	uint16_t x=0;
	uint16_t y=0;
	
	DDRD = 0xFF;	//Port D als Ausgang setzen
	
	/*
	PORTD = 0xFF;	// alle Pins an Port D auf high setzen
	*/
	
	
	//Lauflicht2-------------
	/*
	
	short zeit=100;
	
	while(1){
	
		LED7_AUS;
		LED0_AUS;
		LED0_EIN;
		LED7_EIN;
		
		_delay_ms(zeit);
		
		LED0_AUS;
		LED7_AUS;
		LED1_EIN;
		LED6_EIN;
		
		_delay_ms(zeit);
		
		LED1_AUS;
		LED6_AUS;
		LED2_EIN;
		LED5_EIN;
		
		_delay_ms(zeit);
		
		LED2_AUS;
		LED5_AUS;
		LED3_EIN;
		LED4_EIN;
	
		_delay_ms(zeit);
		
		LED4_AUS;
		LED3_AUS;
		LED5_EIN;
		LED2_EIN;
		
		_delay_ms(zeit);
		
		LED5_AUS;
		LED2_AUS;
		LED6_EIN;
		LED1_EIN;
		
		_delay_ms(zeit);
		
		LED6_AUS;
		LED1_AUS;
		LED7_EIN;
		LED0_EIN;
		
	}
	*/
	
	
	
	
	//--Lauflicht1-------------
	/*
	
	while(1){
	
		LED0_EIN;
		
		_delay_ms(500);
		
		
		LED0_AUS;
		LED1_EIN;
		
		
		_delay_ms(500);		
		
		
		LED1_AUS;
		LED2_EIN;
		
		
		_delay_ms(500);
		
		
		LED2_AUS;
		LED3_EIN;
		
		
		_delay_ms(500);
		
		
		LED3_AUS;
		LED4_EIN;
		
		
		_delay_ms(500);
		
		
		LED4_AUS;
		LED5_EIN;
		
		
		_delay_ms(500);
		
		
		LED5_AUS;
		LED6_EIN;
		
		
		_delay_ms(500);
		
		
		LED6_AUS;
		LED7_EIN;
		
		
		_delay_ms(500);
		
		
		LED7_AUS;
	}
		
	*/	
		
		
	//--Fehler------------------
	/*
		
		LED0_EIN;
		
		for (x=0; x<10000; x++);
		
		
		LED0_AUS;
		LED1_EIN;
		
		
		for (x=0; x<30000; x++);
		
		
		LED1_AUS;
		LED2_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED2_AUS;
		LED3_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED3_AUS;
		LED4_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED4_AUS;
		LED5_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED5_AUS;
		LED6_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED6_AUS;
		LED7_EIN;
		
		
		for (x=0; x>10000; x++);
		
		
		LED7_AUS;	
	
	*/
	
	
	
	while(1)
	{
		
		
	}//end of while
	
	return 0;
}//end of main