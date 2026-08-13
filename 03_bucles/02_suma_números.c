// Pedir un número N y calcula la suma de todos los npumeros desde el 1 hasta N

#include <stdio.h>

int main(){

int N;

printf("Ingrese un número: \n");
scanf("%d", &N);

int suma = 0;
for (int i = 1; i <= N; i++){
	suma = suma + i;
}

printf("La suma de todos los números desde el 1 hasta el %d es: %d", N, suma);

return 0;
}
