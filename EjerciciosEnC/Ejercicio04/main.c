#include <stdio.h>
#include <stdlib.h>

/*APP QUE COMPARA DOS ENTEROS E IMPRIME CUAL ES MAYOR*/

int main(int argc, char *argv[]) 
{
	int num1, num2;
	printf("Ingrese el primer numero: \n");
	scanf("%i" , &num1);
	printf("Ingrese el segundo numero:\n");
	scanf("%i" , &num2);
	
	if (num1 > num2)
	{
		printf("El numero mayor es: %i", num1);
	}
	else if(num1 < num2)
	{
		printf("El numero mayor es: %i", num2);
	}
	else
	{
		printf("Ambos son iguales");
	}
	return 0;
}
