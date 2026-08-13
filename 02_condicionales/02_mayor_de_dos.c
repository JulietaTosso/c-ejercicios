// Pedir dos números y mostrar cual es el mayor o si son iguales.

#include <stdio.h>

int main(){

int num1, num2;

printf("Ingresar el primer número: \n");
scanf("%d", &num1);
printf("Ingresar el segundo número: \n");
scanf("%d", &num2);

if (num1 == num2){
	printf("Los números son iguales\n");
	}
else if (num1 > num2){
	printf("El mayor es el primer número [%d]\n", num1);	
	}
else {
	printf("El mayor es el segundo número [%d]\n", num2);
	}


return 0;
}
