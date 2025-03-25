
#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a = 10;
    int *p = &a;

    printf("Contenido del puntero: %d\n", *p);
    printf("Dirección de memoria almacenada por el puntero: %p\n", p);
    printf("Dirección de memoria de la variable: %p\n", &a);
    printf("Dirección de memoria del puntero: %p\n", &p);
    printf("Tamaño de memoria utilizado por esa variable: %ld\n", sizeof(a));

    return 0;
}
