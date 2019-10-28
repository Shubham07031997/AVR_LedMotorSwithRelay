#include<avr/io.h>
#define F_CPU 8000000
#include<util/delay.h>
int main()
{
   DDRA=0X00;
   DDRB=0Xff;
   DDRC=0Xff;
   DDRD=0Xff;
   while(1)
      {
	        PORTA=0b11100000;
			if((PINA & 0b1110000)==0b01100000)
			{  
			   PORTD=0b01010101;
			   _delay_ms(100);
			   PORTD=0b10101010;
			   _delay_ms(100);
			   }
                                else { PORTD=0x00;}
                                      
              if((PINA & 0b1110000)==0b10100000)
			  {
			          PORTB=0b10001000;
					  _delay_ms(100);}
                                   else{PORTA=0x00;}
                  if((PINA &0b11100000)==0b11000000)
				  {
				         PORTC=0b11000000;}

			   else
			     { 
				  PORTC=0x00;
					  }
					  
	}				  
   }
