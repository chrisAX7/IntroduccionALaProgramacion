#include <stdio.h>

/*4. verificar si un año es bisiesto*/

int main()
{
    int anio;
    printf("*** App que indicia si un anio es bisiesto ***\n");
    printf("\n");
    printf("En que anio estamos?");
    scanf("%d", &anio);

    //Valida si el año es negativo
    if (anio < 1)
    {
        printf("El numero %d es invalido\n", anio);
    }
    else
    {
        //si es divisible por 4 es bisiesto o si es divisible por 100 y 400 a la vez tambien
        if (anio % 4 == 0 || anio % 400 == 0 && anio % 100 == 0)
        {
            printf("El anio %d es bisiesto", anio);
        }
        else
        {
            printf("El anio %d no es bisiesto", anio);
        }
    }
    return 0;
}
