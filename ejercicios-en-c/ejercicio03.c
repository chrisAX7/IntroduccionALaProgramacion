#include <stdio.h>

/*APP QUE INDICA SI ES PAR O IMPAR*/

int main(void)
{
    //ENTRADA
    int num;
    printf("APP QUE INDICA SI UN NUMERO ES PAR O IMPAR\n");
    printf("Ingrese un numero:");
    scanf("%i", &num);

    //CONDICION QUE EVALUA SI ES PAR
    if (num % 2 == 0 )
    {   //SALIDA SI LA CONDICION ES VERDADERA
        printf("El numero %i es par", num);
    }
    else
    {   //SALIDA SI LA CONDICION ES FALSA
        printf("El numero %i es impar", num);
    }
}
