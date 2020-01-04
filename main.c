/*
 * door.c
 *
 * Created: 11/10/1398 09:30:28 ق.ظ
 * Author : Sajede.Nick
 */ 

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRA=0x00;
	DDRB=0xff;
	DDRC=0x80;
	DDRD=0x00;
	int array[8]={5,5,5,5,5,5,5,5};
    /* Replace with your application code */
    while (1) 
    {
		if(PINA0==1||PINA1==1||PINA2==1||PINA3==1||PINA4==1||PINA5==1||PINA6==1||PINA7==1)
		{
			PORTC=0b10000000;
			_delay_ms(5000);
			PORTC=0b00000000;
		}

		if(PINC3==1)
		{
			int a=PINC;
			int b=PIND;
			if(array[a]==b)
			{
				PORTB=pow(2.0,a);
			}
		}

    }
}

