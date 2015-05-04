unsigned cnt;          // Definir la variable cnt

void interrupt() {
  cnt++;               // Con una interrupción la cnt se incrementa en 1
  INTCON = 16;       // Bit INTE se pone a 1, el bit INTF se pone a 0
}

void main(){
  ANSEL = 0;           // Todos los pines de E/S se configuran como digitales
  ANSELH = 0;
  TRISB = 0b00000001;           // El pin 1 del puerto B se configura como entrada (INT)
  TRISC = 0;            //Todos los pines del puerto C se confguran
                       // como salidas
  PORTC = 0x0;         // Reiniciar el puerto PORTC
  INTCON = 144;       // Habilitada interrupción cambio de flancos en el pin INT
  cnt = 0;             // A la variable cnt se le asigna un 0

  do {                 // Bucle infinito
 // Incrementar el puerto PORTB después 400 interrupciones
      PORTC = cnt; // Puerto C toma el valor de cnt
  } while(1);
     //implicitamente es la llamada a la rutina de atenciòn de interrupciòn
}
