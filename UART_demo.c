void main( void )
{
 //Declaración de variables.
 char DATO;
 UART1_Init(9600); //Inicio del módulo USART.
 //Se transmite el texto: de bienvenida.
 UART1_Write_Text("Bienvenido al simulador:");
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10); //Se transmite el ASCII del retroceso del carro.
 //Se trasmite el texto de pulsar tecla.
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10); //Se transmite el ASCII del retroceso del carro.
 while(1)//Bucle infinito.
 {
 //La sentencia if evalúa si un dato está listo para leer.
 if(UART1_Data_Ready()==1)
 {
 //Se lee el DATO del bufer.
 DATO = UART1_Read();
 //Se imprime el texto de realimentación.
 UART1_Write_Text("Usted pulso la tecla: ");
 UART1_Write(DATO); //Se transmite el DATO recibido.
 UART1_Write(13); //Se transmite el ASCII del ENTER.
 UART1_Write(10); //Se transmite el ASCII del retroceso del carro.
 }
 }
}
