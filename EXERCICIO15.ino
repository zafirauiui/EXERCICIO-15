
/* //Esta práctica intoduciremos é unha montaxe do exercicio anterior, pero incorporaremos //un pulsador programado con texto.Esta sería a penúltima práctica //das portas lóxicas as entradas serán(A, B, C). //A)Realizarase a programación por software en vez de hardware. //B)Activación e desativación do LED simuladas con pulsadores(A, B, C), //os seus valores serán cando sea 0 non está activo e cando sea 1 está premido. //C)Empregaremos o bloque "IF-ELSE" engariremos unhan condición as entradas dos pulsadores. //os oins 8, 9, 10 corresponden as entradas (A, B, C). A fórmula que teño que implemetar para o led é a seguinte:

S = A̅ . B + A . C

*/

#define A 10 #define B 9 #define C 8 #define LAMP 11

bool condicion; bool a = 0; bool b = 0; bool c = 0;

void setup()

{ pinMode(A, INPUT); // Pulsador 1 no pin 10 pinMode(B, INPUT); // Pulsador 2 no pin 9 pinMode(C, INPUT); // Pulsador 3 no pin 8 pinMode(LAMP, OUTPUT); // SAÍDA LAMP no pin 11

} void loop() {

a = digitalRead(A); b = digitalRead(B); c = digitalRead(C); //condicion = (!a && b && !C) + (!a && b && c + (a && !b && c); // || (a && b && c),esta fórmula quedaría:(!a && b) + (a && c) bool condicion = !a && b || a && c; if(condicion)

{ digitalWrite(LAMP, HIGH); // Encende o LED

}

else { digitalWrite(LAMP, LOW); // Non encende o LED

}
}
