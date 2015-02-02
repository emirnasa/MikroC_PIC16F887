//declaracìòn de variables, no inicializadas
unsigned short a;

//inicia el programa principal
void main() {
//Declaro el puerto D como salidas, todas.
TRISD = 0;

while(1){
//inicializo la variable a con 3
a = 3;

//comparo "¿si a es igual a 3?"
if(a == 3){
PORTD = 255;
Delay_ms(500);
PORTD = 0;
Delay_ms(500);
//Decremento a una unidad.
a-- ;
}

//Comparo "¿Si a es igual a 2?"
if(a == 2){
PORTD = 15;
Delay_ms(500);
PORTD = 0;
Delay_ms(500);
//Decremento a nuevamente
a-- ;
}

//vuelvo a comparar
if(a == 1){
PORTD = 240;
Delay_ms(500);
PORTD = 0;
Delay_ms(500);
//Decremento a
a--;
}

//Vuelvo a comparar
if(a == 0){
PORTD = 170;
Delay_ms(500);
PORTD = 0;
Delay_ms(500);
//Reinicio a en 3
a=3;
}
}
}

//Estrucutura del IF

/*
if(expresiòn a evaluar){
Rutina si la expresión evaluada es verdadera
}
*/
