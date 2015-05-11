void main( void )
{
 //Declaración de variables.

 char DATO;
 TRISD = 0;
 UART1_Init(9600); //Inicio del módulo USART.
 //Se transmite el texto: de bienvenida.
 UART1_Write_Text("Bienvenido al simulador:");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10); //Se transmite el ASCII del retroceso del carro.
 //Se trasmite el texto de pulsar tecla.
 UART1_Write_Text("Pulse una tecla!...");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10); //Se transmite el ASCII del retroceso del carro.
 PORTD = 0;
 while(1)//Bucle infinito.
 {
 //La sentencia if evalúa si un dato está listo para leer.
 if(UART1_Data_Ready()==1)
 {
 //Se lee el DATO del bufer.
 DATO = UART1_Read();
 //Se imprime el texto de realimentación.
 /*UART1_Write_Text("Usted pulso la tecla: ");
 UART1_Write(DATO); //Se transmite el DATO recibido.
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10);*///Se transmite el ASCII del retroceso del carro.
 if(DATO == 87){
 UART1_Write_Text("ADELANTE");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10);
 RD3_BIT=1;
 }
 if(DATO == 65){
 UART1_Write_Text("IZQUIERDA");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10);
 RD0_BIT=1;
 RD1_BIT=0;
 }
  if(DATO == 68){
 UART1_Write_Text("DERECHA");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10);
 RD0_BIT=0;
 RD1_BIT=1;
 }
 if(DATO == 83){
 UART1_Write_Text("ALTO");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10);
 PORTD=0;
 }
 
 }
 }
}
