#include <stdio.h>

/*1. determinar si un numeo es divisible por 3 y por 5*/

int main(void) {

    //DECLARACION E INICIALIZACION DE LA VARIABLE
    int num;
    printf("***App que valida si un numero es divisible por 3 y por 5*** ");
    printf("\n");
    printf("\n");
    printf("Ingrese un numero entero:");
    scanf("%d", &num);

    //CONDICION PARA VALIDAR QUE EL NUMERO ES DIVISIBLE POR 3 Y POR 5 A LA VEZ
    if (num % 3 == 0 && num % 5 == 0)
    {   //Si la condicion se cumple se imprime este mensasje
        printf("El numero %d es divisible por 3 y por 5\n", num);
    }
    else
    {
        printf("El numero %d es divisible solo por uno de los dos numeros o ninguno\n", num);
    }

    return 0;
}