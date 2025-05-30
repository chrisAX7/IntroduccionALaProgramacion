#include <stdio.h>

/*Ejercicio 3: Sumar los primeros 10 números naturales (for)*/

int main() {
    int suma = 0;
    for (int i = 1; i <= 10; i++) {
        suma += i;
    }
    printf("La suma de los primeros 10 números naturales es: %d\n", suma);
    return 0;
}
