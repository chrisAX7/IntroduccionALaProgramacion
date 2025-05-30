#include <stdio.h>

/*Ejercicio 5: Calcular el factorial de un número (for)*/

int main() 
{
    int numero;

    printf("Ingrese un número: ");
    scanf("%d", &numero);

    int factorial = 1;

   
   do
   {
       for (int i = 1; i <= numero; i++) 
       {
           factorial *= i;
       }
       if (numero < 0) 
       {
           printf("El número debe ser no negativo. Intente de nuevo.\n");
           printf("Ingrese un número: ");
           scanf("%d", &numero);
           factorial = 1; // Reiniciar el factorial
       }
   } while (numero < 0);

    printf("El factorial de %d es: %d\n", numero, factorial);
    return 0;
}
