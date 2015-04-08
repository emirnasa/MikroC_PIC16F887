   // LCD module connections
sbit LCD_RS at RB4_bit;
sbit LCD_EN at RB5_bit;
sbit LCD_D4 at RB0_bit;
sbit LCD_D5 at RB1_bit;
sbit LCD_D6 at RB2_bit;
sbit LCD_D7 at RB3_bit;

sbit LCD_RS_Direction at TRISB4_bit;
sbit LCD_EN_Direction at TRISB5_bit;
sbit LCD_D4_Direction at TRISB0_bit;
sbit LCD_D5_Direction at TRISB1_bit;
sbit LCD_D6_Direction at TRISB2_bit;
sbit LCD_D7_Direction at TRISB3_bit;
// End LCD module connections

char txt1[4];
unsigned short cont1, num;

int i;


void main(){
  ANSEL  = 0;                        // Configure AN pins as digital I/O
  ANSELH = 0;
  C1ON_bit = 0;                      // Disable comparators
  C2ON_bit = 0;
  TRISD=255;
  TRISA = 0;

  Lcd_Init();                        // Initialize LCD
  
  cont1 = 0;

  while(1){
  
  num = PORTD;
  
  switch(num){
  
  case 1:
       Lcd_Out(1,1, "Secuencia 1");
       PORTA = 255;
       Delay_ms(500);
       PORTA = 0;
       Delay_ms(500);
       break;
  case 2:
       Lcd_Out(1,1, "Secuencia 2");
       PORTA = 128;
       Delay_ms(500);
       PORTA = 0;
       Delay_ms(500);
       break;
  
  
  
  
  
  }
  
  }
}
