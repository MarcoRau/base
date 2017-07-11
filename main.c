#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL

#define TASTE1 !(PINB & (1<<PB1))		//Taster

#define LED0_AUS PORTD &= ~(1<<PD0);	//löscht bit PD0
#define LED0_EIN PORTD |= (1<<PD0);		//setzt PD0

#define LED1_AUS PORTD &= ~(1<<PD1);	//löscht bit PD1
#define LED1_EIN PORTD |= (1<<PD1);		//setzt PD1

#define LED2_AUS PORTD &= ~(1<<PD2);	//löscht bit PD2
#define LED2_EIN PORTD |= (1<<PD2);		//setzt PD2

#define LED3_AUS PORTD &= ~(1<<PD3);	//löscht bit PD3
#define LED3_EIN PORTD |= (1<<PD3);		//setzt PD3

#define LED4_AUS PORTD &= ~(1<<PD4);	//löscht bit PD4
#define LED4_EIN PORTD |= (1<<PD4);		//setzt PD4

#define LED5_AUS PORTD &= ~(1<<PD5);	//löscht bit PD5
#define LED5_EIN PORTD |= (1<<PD5);		//setzt PD5

#define LED6_AUS PORTD &= ~(1<<PD6);	//löscht bit PD6
#define LED6_EIN PORTD |= (1<<PD6);		//setzt PD6

#define LED7_AUS PORTD &= ~(1<<PD7);	//löscht bit PD7
#define LED7_EIN PORTD |= (1<<PD7);		//setzt PD7

int main(void)
{
	
	DDRD = 0xFF;						//Port D als Ausgang setzen
	PORTD = 0xFF;						// alle Pins an Port D auf high setzen
	
	
	DDRB &= ~(1<<PB1);					//Eingang
	PORTB |= (1<<PB1);					//Pull-up Widerstand
	
	short zeit=100;
	

	while(1){
	
	if(TASTE1){
	
		
			LED0_EIN;
			LED2_EIN;
			LED4_EIN;
			LED6_EIN;
			LED1_AUS;
			LED3_AUS;
			LED5_AUS;
			LED7_AUS;
			
			_delay_ms(zeit);
			
			LED0_AUS;
			LED2_AUS;
			LED4_AUS;
			LED6_AUS;
			LED1_EIN;
			LED3_EIN;
			LED5_EIN;
			LED7_EIN;
			
			_delay_ms(zeit);
			
			}	
		}
	
	//--Lauflicht2---------
	/*
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
		
		_delay_ms(zeit);
		
		
		LED0_AUS;
		LED1_EIN;
		
		
		_delay_ms(zeit);		
		
		
		LED1_AUS;
		LED2_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED2_AUS;
		LED3_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED3_AUS;
		LED4_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED4_AUS;
		LED5_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED5_AUS;
		LED6_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED6_AUS;
		LED7_EIN;
		
		
		_delay_ms(zeit);
		
		
		LED7_AUS;
	}
		
	*/	
	
	
	
	return 0;
}//end of main