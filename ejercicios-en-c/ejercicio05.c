#include <stdio.h>

/*APP QUE CALCULA EL AREA DE UN TRIANGULO*/

int main(void)
{
    //ENTRADA
    float base, altura, area;
    printf("Ingrese el valor de la base:\n");
    scanf("%f" , &base);
    printf("Ingrese el valor de la altura:\n");
    scanf("%f" , &altura);

    //PROCESO
    area = base * altura / 2;

    //SALIDA
    printf("El area del triangulo es: %.2f" , area);
}
