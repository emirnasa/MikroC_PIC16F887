/*Programa para leer botones desde el puerto C*/

/* Alvaro Amperez
Device: PIC16F887
Development Board: EasyPIC7
Clock Source: Imternal 8MHz
18/03/2015*/

void main() {
TRISD = 0; //Declaro todos los pines del puerto D como salidas
TRISC = 255; //Delcaro todos los pines del puerto C como entradas
PORTD = 0; //Es recomendable limpiar el puerto de salida de cualquier dato
           //indeseable, y este es el comando recomendado antes de iniciar el
           //bucle infinito
while(1){  //inicio bucle infinito

       if(PORTC.F3 = 1){ //verifico si el pin RC3 es presionado
       Delay_ms(20);     //espero un tiempo por si el switch aun sigue presionado
       PORTD = 255;      //Primer paso del parpadeo
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       PORTD = 255;
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       }
       
       if(RC5_bit){ //verifico si el pin RC5 es verdadero es decir 1
       Delay_ms(20);     //espero un tiempo por si el switch aun sigue presionado
       PORTD = 153;      //Primer paso del parpadeo
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       PORTD = 153;
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       }
       if(Button(&PORTC,7,20,1)){ //Verifico si el boton conectado al puerto C en el pin 7 es presionado,
                                    //espero 20 ms, y verifico si es presionado,
                                    //es decir 1, la estructura es
                                    //Button(&Puerto, pin, tiempo presionado, estado)
       PORTD = 1;      //Primer paso del parpadeo
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       PORTD = 128;
       Delay_100ms;
       PORTD = 0;
       Delay_100ms;
       }
}
}
