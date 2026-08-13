//Pedir resistencia y corriente y calcular tensíon y potencia.

#include <stdio.h>

int main(){

float R, V, I, P;

printf("Ingrese el valor de la resistencia en ohmios: \n");
scanf("%f", &R);
printf("Ingrese el valor de la coriente en amperios: \n");
scanf("%f", &I);

V = R * I;
P = V * I;

printf("El voltaje es: %.2f V\n", V);
printf("La potencia es: %.2f W\n", P);

return 0;
}
