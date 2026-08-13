// Pedir voltaje y resistencia, calcular la corriente y determinar el estado del circuito.

#include <stdio.h>

int main(){

int V, R, I;

printf("Ingrese voltaje: \n");
scanf("%d", &V);
printf("Ingrese resistencia: \n");
scanf("%d", &R);


if (R <= 0){
	printf("Resistencia inválida\n");
}
else if (V < 0){
	printf("Tensión inválida\n");
}


else{
	I = V / R;

	if(I == 0){
		printf("Circuito sin circulación de corriente\n");
	}
	else {
		printf("Circuito con circulación de corriente\n");
	}
}
return 0;
}
