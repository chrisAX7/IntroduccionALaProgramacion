#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num1, num2, resultado;
	
	printf("APP QUE SUMA DOS NUMEROS ENTEROS \n");
	
	printf("Ingrese el primer numero:\n");
	scanf("%i" , &num1);
	printf("Ingrese el segundo numero:\n");
	scanf("%i" , &num2);
	
	resultado = num1 + num2;
	
	printf("El resultado es: %i", resultado);
	
	return 0;
}
