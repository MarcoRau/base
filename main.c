#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL					//Zeit definiert

#define TASTE1 !(PINB & (1<<PB1))		//Taster1
#define TASTE2 !(PINB & (1<<PB2))		//Taster2
#define TASTE3 !(PINB & (1<<PB3))		//Taster3

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
	
	
	DDRB &= ~(1<<PB1);					//Eingang1
	PORTB |= (1<<PB1);					//Pull-up Widerstand
	DDRB &= ~(1<<PB2);					//Eingang2
	PORTB |= (1<<PB2);					//Pull-up Widerstand
	DDRB &= ~(1<<PB3);					//Eingang2
	PORTB |= (1<<PB3);					//Pull-up Widerstand
	
	short zeit1=50;
	
	short zeit2=100;
	
	short zeit3=35;
	
	short zeit4=45;
	
	short zeit5=500;
	
	short x=0;
	

	while(1){
	
			if(TASTE1){			//Lauficht1
				
				do{
				
					x++;
					
					LED0_EIN;
					LED2_EIN;
					LED4_EIN;
					LED6_EIN;
					LED1_AUS;
					LED3_AUS;
					LED5_AUS;
					LED7_AUS;
					
					_delay_ms(zeit1);
					
					LED0_AUS;
					LED2_AUS;
					LED4_AUS;
					LED6_AUS;
					LED1_EIN;
					LED3_EIN;
					LED5_EIN;
					LED7_EIN;
					
					_delay_ms(zeit1);
					
					
				
				}while (x<5);
				
			}
			
				
				
			else if(TASTE2){	//Lauflicht2
			
				do{
				
					x++;
					
					LED7_AUS;
					LED0_AUS;
					LED0_EIN;
					LED7_EIN;
					
					_delay_ms(zeit2);
					
					LED0_AUS;
					LED7_AUS;
					LED1_EIN;
					LED6_EIN;
					
					_delay_ms(zeit2);
					
					LED1_AUS;
					LED6_AUS;
					LED2_EIN;
					LED5_EIN;
					
					_delay_ms(zeit2);
					
					LED2_AUS;
					LED5_AUS;
					LED3_EIN;
					LED4_EIN;
					
					_delay_ms(zeit2);
					
					LED4_AUS;
					LED3_AUS;
					LED5_EIN;
					LED2_EIN;
					
					_delay_ms(zeit2);
					
					LED5_AUS;
					LED2_AUS;
					LED6_EIN;
					LED1_EIN;
					
					_delay_ms(zeit2);
					
					LED6_AUS;
					LED1_AUS;
					LED7_EIN;
					LED0_EIN;
					
					_delay_ms(zeit2);
					
					LED7_AUS;
					LED0_AUS;
				}while(x<5);
			}
			
			
			
			else if(TASTE3){	//Lauflicht3
			
				do{
				
					x++;
					
					LED0_EIN;
					
					_delay_ms(zeit3);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit3);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit3);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit3);
					
					
					LED3_AUS;
					LED4_EIN;
					
					_delay_ms(zeit3);
					
					
					LED4_AUS;
					LED5_EIN;
					
					
					_delay_ms(zeit3);
					
					
					LED5_AUS;
					LED6_EIN;
					
					
					_delay_ms(zeit3);
					
					
					LED6_AUS;
					LED7_EIN;
					
					
					_delay_ms(zeit3);
					
					
					LED7_AUS;
					
				}while(x<5);
				
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED3_AUS;
					LED4_EIN;
					
					_delay_ms(zeit4);
					
					
					LED4_AUS;
					LED5_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED5_AUS;
					LED6_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED6_AUS;
					LED7_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil1
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED3_AUS;
					LED4_EIN;
					
					_delay_ms(zeit4);
					
					
					LED4_AUS;
					LED5_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED5_AUS;
					LED6_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil2
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED3_AUS;
					LED4_EIN;
					
					_delay_ms(zeit4);
					
					
					LED4_AUS;
					LED5_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil3
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED3_AUS;
					LED4_EIN;
					
					_delay_ms(zeit4);
					
										//Teil4
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
					
					LED2_AUS;
					LED3_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil3
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);		
					
					
					LED1_AUS;
					LED2_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil4
					
					LED0_EIN;
					
					_delay_ms(zeit4);
					
					
					LED0_AUS;
					LED1_EIN;
					
					
					_delay_ms(zeit4);
					
										//Teil5
					
					LED0_EIN;
					
					_delay_ms(zeit5);
				
				
			}
			
			else{
			
				PORTD = 0x00;
			}
			
			
			
			
			
			
		x=0;	//Durchlauf auf Null setzen
		
	}//end of while
	
	
	return 0;
}//end of main
