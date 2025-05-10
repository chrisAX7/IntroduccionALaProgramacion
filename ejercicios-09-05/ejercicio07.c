#include <stdio.h>

/*7. calcular el factorial de un numero*/

int main()
{
    int numero, factorial = 1;
    printf("*** App que calcula el factorial de un numero ingresado*** \n");
    printf("Introduzca un numero:");
    scanf("%d", &numero);

    for (int i = 1; i <= numero; ++i)
    {
        factorial = factorial * i;
    }
        printf("El factorial de %d es %d", numero, factorial);
    return 0;
}