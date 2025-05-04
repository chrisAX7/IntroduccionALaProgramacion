#include <stdio.h>

/*APP QUE COMPARA DOS ENTEROS E IMPRIME CUAL ES MAYOR*/

int main(void)
{
    //ENTRADA
    int num1, num2;
    printf("Ingrese el primer numero: \n");
    scanf("%i" , &num1);
    printf("Ingrese el segundo numero:\n");
    scanf("%i" , &num2);

    //CONDICION QUE EVALUA SI EL PRIMERO ES MAYOR AL SEGUNDO
    if (num1 > num2)
    {
        printf("El numero mayor es: %i", num1);
    }
    //CONDICION QUE EVALUA SI EL SEGUNDO ES MAYOR AL PRIMERO
    else if(num1 < num2)
    {
        printf("El numero mayor es: %i", num2);
    }
    //SI NUNGUNA DE LAS DOS CONDICIONES SE CUMPLE AMBOS SON IGUALES
    else
    {
        printf("Ambos son iguales");
    }
}
