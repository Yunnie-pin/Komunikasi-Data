/*******************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 15/04/2021
Author  : 
Company : 
Comments: 


Chip type               : ATmega32
Program type            : Application
AVR Core Clock frequency: 12,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 512
*******************/

#include <mega32.h>
#include <delay.h>

// Declare your global variables here
int i;

//nada Do dan Angka 2
void nadaDo (void)
{
for (i=0;i<261;i++)
    {   
    PORTC = 0x5B;
    PORTB.0=0;
    delay_us(1915);
    PORTB.0=1;
    delay_us(1915);
    }
}

//nada Re dan Angka 0
void nadaRe (void)
{
for (i=0;i<294;i++)
    {
    PORTC = 0x3F;
    PORTB.0=0;
    delay_us(1700);
    PORTB.0=1;
    delay_us(1700);
    }
}

//nada Mi dan Angka 1
void nadaMi (void)
{
for (i=0;i<329;i++)
    {
    PORTC = 0x06;
    PORTB.0=0;
    delay_us(1519);
    PORTB.0=1;
    delay_us(1519);
    }
}

//nada Fa dan Angka 1
void nadaFa (void)
{
for (i=0;i<349;i++)
    {
    PORTC = 0x06;
    PORTB.0=0;
    delay_us(1432);
    PORTB.0=1;
    delay_us(1432);
    }
}

//nada Sol dan Angka 3
void nadaSol (void)
{
for (i=0;i<392;i++)
    {
    PORTC = 0x4F;
    PORTB.0=0;
    delay_us(1275);
    PORTB.0=1;
    delay_us(1275);
    }
}

//nada La dan Angka 7
void nadaLa (void)
{
for (i=0;i<440;i++)
    {
    PORTC = 0x07;
    PORTB.0=0;
    delay_us(1136);
    PORTB.0=1;
    delay_us(1136);
    }
}

//nada Si dan Angka 6
void nadaSi (void)
{
for (i=0;i<493;i++)
    {
    PORTC = 0x7D;
    PORTB.0=0;
    delay_us(1014);
    PORTB.0=1;
    delay_us(1014);
    }
}

//nada DO dan Angka 3
void nadaDo2 (void)
{
for (i=0;i<523;i++)
    {
    PORTC = 0x4F;
    PORTB.0=0;
    delay_us(956);
    PORTB.0=1;
    delay_us(956);
    }
}

void main (void)
{   
DDRD=0x80;
                        
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
// State: Bit7=P Bit6=P Bit5=P Bit4=P Bit3=P Bit2=P Bit1=P Bit0=P 
PORTA=(1<<PORTA7) | (1<<PORTA6) | (1<<PORTA5) | (1<<PORTA4) | (1<<PORTA3) | (1<<PORTA2) | (1<<PORTA1) | (1<<PORTA0);

// Port B initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRB=(1<<DDB7) | (1<<DDB6) | (1<<DDB5) | (1<<DDB4) | (1<<DDB3) | (1<<DDB2) | (1<<DDB1) | (1<<DDB0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRC=(1<<DDC7) | (1<<DDC6) | (1<<DDC5) | (1<<DDC4) | (1<<DDC3) | (1<<DDC2) | (1<<DDC1) | (1<<DDC0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);

// Port D initialization
// Function: Bit7=Out Bit6=Out Bit5=Out Bit4=Out Bit3=Out Bit2=Out Bit1=Out Bit0=Out 
DDRD=(1<<DDD7) | (1<<DDD6) | (1<<DDD5) | (1<<DDD4) | (1<<DDD3) | (1<<DDD2) | (1<<DDD1) | (1<<DDD0);
// State: Bit7=0 Bit6=0 Bit5=0 Bit4=0 Bit3=0 Bit2=0 Bit1=0 Bit0=0 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);



while(1)
      {  
      if (PINA.0==0) {
        nadaDo();
        nadaRe();
        nadaMi();
        nadaFa();
        nadaSol();
        nadaLa();
        nadaSi();
        nadaDo2();
        }
        
      if (PINA.1==0){
        PORTD=0b00000001;
        delay_ms(400);
        PORTD=0b00000010;
        delay_ms(400);
        PORTD=0b00000100;
        delay_ms(400);
        PORTD=0b00001000;
        delay_ms(400);
        PORTD=0b00010000;
        delay_ms(400);
        PORTD=0b00100000;
        delay_ms(400);
        PORTD=0b01000000;
        delay_ms(400);
        PORTD=0b10000000;
        delay_ms(400);
        }
      }
}