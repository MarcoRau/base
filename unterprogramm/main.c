#include <stdlib.h>
#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 8000000UL					//definiert Zeit

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



void led(unsigned char nummer, unsigned char zustand); //Underprogramm

int main(void)
{
	
	DDRD = 0xFF;						//Port D als Ausgang setzen
	PORTD = 0x00;						// alle Pins an Port D auf high setzen
	
	
	DDRB &= ~(1<<PB1);					//Eingang1
	PORTB |= (1<<PB1);					//Pull-up Widerstand
	DDRB &= ~(1<<PB2);					//Eingang2
	PORTB |= (1<<PB2);					//Pull-up Widerstand
	DDRB &= ~(1<<PB3);					//Eingang3
	PORTB |= (1<<PB3);					//Pull-up Widerstand
	
	int zeit1 = 40;
	int zeit2 = 1000;
	int zeit3 = 250;
	
	char x = 0;
	int zahl = 0;

	while (x == 0){
		
		led(1,0);
		led(2,0);
		led(3,0);
		led(4,0);
		led(5,0);
		led(6,0);
		led(7,0);
		
		led(1,1);
		_delay_ms(zeit1);
		led(6,0);
		_delay_ms(zeit1);
		led(2,1);
		_delay_ms(zeit1);
		led(1,0);
		_delay_ms(zeit1);
		led(3,1);
		_delay_ms(zeit1);
		led(2,0);
		_delay_ms(zeit1);
		led(4,1);
		_delay_ms(zeit1);
		led(3,0);
		_delay_ms(zeit1);
		led(5,1);
		_delay_ms(zeit1);
		led(4,0);
		_delay_ms(zeit1);
		led(6,1);
		_delay_ms(zeit1);
		led(5,0);
		_delay_ms(zeit1);
		
		if (TASTE1){
		
		x=1;
			
			while(x == 1){
				
				led(1,1);
				led(2,1);
				led(3,0);
				led(4,0);
				led(5,0);
				led(6,1);
				led(7,1);
				
				if(TASTE3){
					
					x=0;
					
				}
				
				_delay_ms(zeit2);
				
				led(1,0);
				led(2,0);
				led(3,1);
				led(4,1);
				led(5,1);
				led(6,0);
				led(7,1);
				
				if(TASTE3){
					
					x=0;
					
				}
				
				_delay_ms(zeit2);
				
			}
			
		}
		
		
		else if (TASTE2){
			
			x = 1;
			
			while(x == 1){
				
				if(TASTE1){
					
					zahl ++;
					_delay_ms(zeit3);
					
					if(zahl == 10){
						
						zahl = 0;
						
					}
					
				}
				
				if(TASTE3){
					
					zahl --;
					_delay_ms(zeit3);
					
					if(zahl == -1){
						
						zahl = 9;
						
					}
					
				}
				
				if(TASTE2 && TASTE1){
					
					x = 0;
					zahl = 0;
					
					
				}
				
				if(TASTE2 && TASTE3){
					
					x = 0;
					zahl = 0;
					
					
				}
				
				switch (zahl){
					
					case 0: led(1,1);
							led(2,1);
							led(3,1);
							led(4,1);
							led(5,1);
							led(6,1);
							led(7,0);
					break;
					
					case 1: led(1,0);
							led(2,1);
							led(3,1);
							led(4,0);
							led(5,0);
							led(6,0);
							led(7,0);
					break;
					
					case 2: led(1,1);
							led(2,1);
							led(3,0);
							led(4,1);
							led(5,1);
							led(6,0);
							led(7,1);
					break;
					
					case 3:	led(1,1);
							led(2,1);
							led(3,1);
							led(4,1);
							led(5,0);
							led(6,0);
							led(7,1);
					break;
					
					case 4:	led(1,0);
							led(2,1);
							led(3,1);
							led(4,0);
							led(5,0);
							led(6,1);
							led(7,1);
					break;
					
					case 5:	led(1,1);
							led(2,0);
							led(3,1);
							led(4,1);
							led(5,0);
							led(6,1);
							led(7,1);
					break;
					
					case 6:	led(1,1);
							led(2,0);
							led(3,1);
							led(4,1);
							led(5,1);
							led(6,1);
							led(7,1);
					break;
					
					case 7:	led(1,1);
							led(2,1);
							led(3,1);
							led(4,0);
							led(5,0);
							led(6,0);
							led(7,0);
					break;
					
					case 8:	led(1,1);
							led(2,1);
							led(3,1);
							led(4,1);
							led(5,1);
							led(6,1);
							led(7,1);
					break;
					
					case 9:	led(1,1);
							led(2,1);
							led(3,1);
							led(4,1);
							led(5,0);
							led(6,1);
							led(7,1);
					break;
					
				}//ende von switch
				
			}//ende von while
			
		}//ende von if
		
	}//ende von while	
	
	return 0;
	
}//ende von main




//Unterprogramm für LEDs
void led(unsigned char nummer,unsigned char zustand){
	
	switch(nummer) {
	
		case 1:	if(zustand == 1){
					
					PORTD |= (1<<PD0);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD0);
					
				}	
		break;
		
		case 2:	if (zustand == 1){
					
					PORTD |= (1<<PD1);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD1);
					
				}
		break;
		
		case 3:	if (zustand == 1){
					
					PORTD |= (1<<PD2);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD2);
					
				}
		break;
		
		case 4:	if (zustand == 1){
					
					PORTD |= (1<<PD3);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD3);
					
				}
		break;
		
		case 5:	if (zustand == 1){
					
					PORTD |= (1<<PD4);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD4);
					
				}
		break;
		
		case 6:	if (zustand == 1){
					
					PORTD |= (1<<PD5);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD5);
					
				}
		break;
		
		case 7:	if (zustand == 1){
					
					PORTD |= (1<<PD6);
					
				}
				
				else if (zustand == 0){
					
					PORTD &= ~(1<<PD6);
					
				}
		break;
		
		default: return 0;
		
	}
	
}// ende von Underprogramm
