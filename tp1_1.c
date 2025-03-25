
#include <stdio.h>

int main(int argc, char const *argv[])
{
    /*

    Declare un puntero en el procedimiento principal que apunte a una
    variable de algún tipo y muestre por pantalla lo siguiente:
    1) El contenido del puntero
    2) La dirección de memoria almacenada por el puntero.
    3) la dirección de memoria de la variable.
    4) la dirección de memoria del puntero.
    5) el tamaño de memoria utilizado por esa variable usando la
    función sizeof()
     */

    int a = 10;  // Variable de tipo entero
    int *p = &a; // Puntero a una variable de tipo entero

    printf("Contenido del puntero: %d\n", *p);
    printf("Dirección de memoria almacenada por el puntero: %p\n", p);
    printf("Dirección de memoria de la variable: %p\n", &a);
    printf("Dirección de memoria del puntero: %p\n", &p);
    printf("Tamaño de memoria utilizado por esa variable: %ld\n", sizeof(a));

    return 0;
}
