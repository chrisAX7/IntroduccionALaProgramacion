#include <stdio.h>

/*2. tabla de multiplicar de un numero ingresado*/

int main()
{
    //DECLARACION E INICIALIZACION DE VARIABLES
    int numero;
    printf("*** App que muestra la tabla de multiplicar de un numero ingresado ***\n");
    printf("\n");
    printf("Ingrese un numero entero:");
    scanf("%d", &numero);

    //RECORRIDO DEL 1 AL 10
    for (int i = 1; i <= 10; i++)
    {
        //resultados de la tabla
        int resultado = i * numero;
        printf("%d x %d = %d\n", numero, i, resultado);
    }
    return 0;
}