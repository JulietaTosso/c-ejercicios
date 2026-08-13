//Pedir un número y determinar si es positivo, negativo o cero

#include <stdio.h>

int main(){

int num;

printf("Ingrese un número: \n");
scanf("%d", &num);

if (num == 0){
	printf("El número %d es efectivamente cero\n", num);
	}
else if (num > 0){
	printf("El número %d es positivo\n", num);
	}
else {
	printf("El número %d es negativo\n", num);
	}

return 0;
}
