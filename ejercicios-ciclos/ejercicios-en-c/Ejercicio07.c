#include <stdio.h>

/*Ejercicio 7: Mostrar tabla de multiplicar (usar for)*/

int main() 
{
    int numero;

    printf("Ingrese un número para mostrar su tabla de multiplicar: ");
    scanf("%d", &numero);

    for (int i = 1; i <= 10; i++) 
    {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}
