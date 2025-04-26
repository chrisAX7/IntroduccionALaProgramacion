#include <stdio.h>
#include <stdlib.h>

/* CALCULAR EL PROMEDIO DE TRES NUMEROS*/

int main(int argc, char *argv[]) 
{
	//ENTRADA
	float num1, num2, num3;
	printf("Ingrese el primer numero:\n");
	scanf("%f" , &num1);
	printf("Ingrese el segundo numero:\n");
	scanf("%f" , &num2);
	printf("Ingrese el tercer numero:\n");
	scanf("%f" , &num3);
	
	//PROCESO
	float promedio = (num1 + num2 + num3) / 3;
	
	//SALIDA
	printf("EL promedio de los tres numeros es: %.2f" , promedio);
	return 0;
}
