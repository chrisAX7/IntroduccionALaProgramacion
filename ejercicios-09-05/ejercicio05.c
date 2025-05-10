#include <stdio.h>

/*5. calcular el perimetro de un rectangulo
 * perimetro =  2 * base + 2 * altura
 */

int main()
{
    //ENTRADA
    printf("*** App que calcula el perimetro de un rectangulo ingresando la base y la "
           "altura *** \n");
    float base, altura;
    printf("\n");
    printf("Ingrese el valor de la base:");
    scanf("%f", &base);
    printf("Ingrese el valor de la altura:");
    scanf("%f", &altura);
    printf("\n");

    //PROCESO
    float perimetro = 2 * base + 2 * altura;

    //SALIDA
    printf("El perimetro es: %.2f", perimetro);
    return 0;
}