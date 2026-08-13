// Pedir 2 numeros y mostrar el resultado de las operaciones basicas


#include <stdio.h>

int main(){
int  num1, num2;

	printf("Ingresar primer número: \n");
	scanf("%d", &num1);
	printf("Ingresar segundo número: \n");
	scanf("%d", &num2);

int suma, resta, multi, resto;

suma = num1 + num2;
resta = num1 - num2;
multi = num1 * num2;
float div = (float)num1 / num2;
resto = num1 % num2;

printf("Operaciones resultantes entre %d y %d: \n", num1, num2);
printf("1. Suma = %d\n", suma);
printf("2. Resta = %d\n", resta);
printf("3. Multiplicación = %d\n ",multi); 
printf("4. División = %.2f\n", div);
printf("5. Resto = %d\n", resto);

return 0;
}
