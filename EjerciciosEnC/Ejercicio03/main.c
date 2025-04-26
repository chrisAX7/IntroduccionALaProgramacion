#include <stdio.h>
#include <stdlib.h>

/*APP QUE INDICA SI ES PAR O IMPAR*/
int main(int argc, char *argv[]) 
{
	int num;
	printf("APP QUE INDICA SI UN NUMERO ES PAR O IMPAR\n");
	printf("Ingrese un numero: ");
	scanf("%i", &num);
	
	if (num % 2 == 0 )
	{
		printf("El numero %i es par" , num);
	}
	else 
	{
		printf("El numero %i es impar" , num);		
	}
	
	return 0;
}
