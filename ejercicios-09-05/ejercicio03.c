#include <stdio.h>

/*3. mostrar el mayor de tres numeros*/

int main()
{
    //ENTRADA
    int numero1, numero2, numero3;
    printf("*** App que imprime el mayor de tres numeros ingresados ***\n");
    printf("\n");
    printf("Ingrese el primer numero:");
    scanf("%d", &numero1);
    printf("Ingrese el segundo numero:");
    scanf("%d", &numero2);
    printf("Ingrese el tercer numero:");
    scanf("%d", &numero3);
    printf("\n");

    //EVALUA SI EL PRIMERO ES EL MAYOR
    if (numero1 > numero2 && numero2 > numero3)
    {
        printf("El numero %d es el mayor\n", numero1);
    }

    //EVALUA SI EL SEGUNDO ES EL MAYOR
    if (numero2 > numero1 && numero1 > numero3)
    {
        printf("El numero %d es el mayor\n", numero2);
    }

    //EVALUA SI EL TERCERO ES EL MAYOR
    if (numero3 > numero2 && numero2 > numero1)
    {
        printf("El numero %d es el mayor\n", numero3);
    }
    return 0;
}