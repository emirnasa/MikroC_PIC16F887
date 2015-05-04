unsigned cnt;          // Definir la variable cnt

void interrupt() {
  cnt++;               // Con una interrupción la cnt se incrementa en 1
  TMR0 = 96;           // El valor inicial se devuelve en el temporizador TMR0
  INTCON = 0x20;       // Bit T0IE se pone a 1, el bit T0IF se pone a 0
}

void main(){
  OPTION_REG = 0x84;   // Pre-escalador se le asigna al temporizador TMR0
  ANSEL = 0;           // Todos los pines de E/S se configuran como digitales
  ANSELH = 0;
  TRISB = 0;           // Todos los pines de puerto PORTB se configuran
  
                       // como salidas
  PORTB = 0x0;         // Reiniciar el puerto PORTB
  TMR0 = 96;           // Temporizador T0 cuenta de 96 a 255
  INTCON = 0xA0;       // Habilitada interrupción TMR0
  cnt = 0;             // A la variable cnt se le asigna un 0
  
  do {                 // Bucle infinito
    if (cnt == 400) {  // Incrementar el puerto PORTB después 400 interrupciones
      PORTB = PORTB++; // Incrementar número en el puerto PORTB en 1
      cnt = 0;         // Reiniciar la variable cnt
    }
  } while(1);
  
}
