// Pedir dos números y mostrar sus valores antes y después de intercambiarlos.

#include <stdio.h>

int main(){

int a, b, aux;

printf("Ingrese el número a: \n");
scanf("%d", &a);

printf("Ingrese el número b: \n");
scanf("%d", &b);

printf("Valores antes:\n a = %d\n b = %d\n", a, b);

aux = a;
a = b;
b = aux;

printf("Valores ahora:\n a = %d\n b = %d\n", a, b);


return 0;
}
