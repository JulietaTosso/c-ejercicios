// Pedir un número y mostrar su tabla del 1 al 10

#include <stdio.h>

int main(){

int N;

printf("Ingrese un número para calcular su tabla de multiplicación: \n");
scanf("%d", &N);

for ( int i = 1; i <= 10; i++){
	int mult = i * N;
	printf("%d x %d = %d\n", i, N, mult);
}

return 0;
}
