#include <mega32.h>
#include <delay.h>

// Declare your global variables here
void nyala(void)
{
 DDRD=0xff;
}

void notA (void)
      {
      // Place your code here
      int i;
   for(i=0;i<440;i++){  
       PORTD.5=1;
       delay_us(1136);
       PORTD.5=0;
       delay_us(1136);
       }
}

void notB(void){
   int i;
   for(i=0;i<493;i++){
       PORTD.5=1;
       delay_us(1014);
       PORTD.5=0;
       delay_us(1014);
       }
}

void notC(void){
   int i;
   for(i=0;i<523;i++){
       PORTD.5=1;
       delay_us(956);
       PORTD.5=0;
       delay_us(956);
       }
}

void notD(void){
   int i;
   for(i=0;i<587;i++){
       PORTD.5=1;
       delay_us(852);
       PORTD.5=0;
       delay_us(852);
       }
}

void notE(void){
   int i;
   for(i=0;i<659;i++){
       PORTD.5=1;
       delay_us(759);
       PORTD.5=0;
       delay_us(759);
       }
}

void notF(void){
   int i;
   for(i=0;i<698;i++){
       PORTD.5=1;
       delay_us(716);
       PORTD.5=0;
       delay_us(716);
       }
}

void notG(void){
   int i;
   for(i=0;i<783;i++){
       PORTD.5=1;
       delay_us(639);
       PORTD.5=0;
       delay_us(639);
       }
}
   


void main(void)
{ 
          nyala();
          notA();
          notB(); 
          notC();
          notD();
          notE();
          notF();
          notG();   
}