//Pedir una nota del 0 al 10 y mostrar una tabla de clasificacion validando que la nota este entre 0 y 10

#include <stdio.h>

int main(){

int nota;

printf("Ingrese la nota (0-10): \n");
scanf("%d", &nota);

if (nota >= 0 && nota <= 10){
	
	if (nota <= 3){
		printf("Desaprobado\n");
		}
	else if (nota <=5){
		printf("Regular\n");
		}
	else if (nota <= 7){
		printf("Bueno\n");
		}	
	else if (nota <= 9){
		printf("Muy bueno\n");
		}
	else{
		printf("Excelente\n");
		}
}
else {
	printf("La nota ingresada no se encuentra dentro de 0-10\n");
}


return 0;
}
