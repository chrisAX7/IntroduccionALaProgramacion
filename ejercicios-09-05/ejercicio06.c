#include <stdio.h>

/*6. validar que un numero ingresado sea positivo*/

int main()
{
    int numero;
    printf("*** App que valida si un numero es positivo ***\n");
    printf("\n");
    printf("Ingrese un numero entero:");
    scanf("%d", &numero);

    if (numero >= 0 ){
        printf("El numero %d es positivo es positivo", numero);
    }
    else
    {
        printf("El numero %d es negativo", numero);
    }
    return 0;
}
