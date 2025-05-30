#include <stdio.h>

/*Ejercicio 4: Pedir números hasta ingresar 0 (usar do while)*/

int main() 
{
    int numero;
    do 
    {
        printf("Ingrese un número (0 para salir): ");
        scanf("%d", &numero);
    } while (numero != 0);
    return 0;
}
