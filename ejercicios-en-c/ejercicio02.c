#include <stdio.h>

/*---App que suma dos enteros---*/

int main(void)
{
    int num1, num2, resultado;

    //ENTRADA
    printf("APP QUE SUMA DOS NUMEROS ENTEROS \n");
    printf("Ingrese el primer numero:\n");
    scanf("%i" , &num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%i" , &num2);

    //PROCESO
    resultado = num1 + num2;

    //SALIDA
    printf("El resultado es: %i\n", resultado);
}

