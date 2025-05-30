#include <stdio.h>

/*Ejercicio 6: Contar cuántos números positivos se ingresan (while)*/

int main() 
{
    int contador = 0;
    int numero;

    while (numero != 0) 
    {
        printf("Ingrese un número (0 para terminar): ");
        scanf("%d", &numero);

        if (numero == 0) 
        {
            break;
        }

        if (numero > 0) 
        {
            contador++;
        }
    }

    printf("Se ingresaron %d números positivos.\n", contador);
    return 0;
}