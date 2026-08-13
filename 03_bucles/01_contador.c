//Pedir un número N y mostrar los números del 1 al N y los del N al 1

#include <stdio.h>

int main(){

int N;

printf("Ingrese un número: ");
scanf("%d", &N);

printf("Ascendente:\n");
for (int i = 1; i <= N; i++){
	printf("%d\n", i);
}	

printf("Descendente:\n");
for (int i = N; i >= 1; i--){
	printf("%d\n", i);
}

return 0;
}
