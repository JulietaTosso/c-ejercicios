// Pedir una temperatura en Celsius y convertirla en Fahrenheit y Kelvin

#include <stdio.h>

int main(){

float c, f, k;

printf("Ingrese una tempertatura en Celsius: \n");
scanf("%f", &c);

f = c * 9.0 / 5.0 + 32.0;
k = c + 273.15;

printf("Sus equivalentes son: \n");
printf("En Fahrenheit: %.2f\n", f);
printf("En Kelvin: %.2f\n", k);


return 0;
}
