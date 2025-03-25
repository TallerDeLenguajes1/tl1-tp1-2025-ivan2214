#include <stdio.h>

int cuadrado(int n)
{
    return n * n;
}

void cuadradoVoid(int n)
{
    printf("El cuadrado de %d es %d\n", n, n * n);
}

void invertir(int *a, int *b)
{
    // guardo en una variable auxiliar el contenido de a para luego asignarle el contenido de b y desp a b el de a guardado en aux
    int aux = *a;
    *a = *b;
    *b = aux;
}

void mostrarDireccionYContenido(int *n) // recibe la dirección de memoria de una variable y muestra su contenido y dirección de memoria
{
    printf("el contenido de la variable es: %d\n", *n);
    printf("laa dirección de memoria de la variable es: %p\n", n);
}

void orden(int *a, int *b) // recibe la dirección de memoria de dos variables y las ordena
{
    if (*a > *b)
    {
        int aux = *a;
        *a = *b;
        *b = aux;
    }
}

int main(int argc, char const *argv[])
{
    int num = 4;
    printf("El cuadrado de %d es %d\n", num, cuadrado(num));
    cuadradoVoid(num);

    int var = 10;
    mostrarDireccionYContenido(&var);

    int x = 10, y = 5;
    printf("antes de invertir: x = %d, y = %d\n", x, y);
    invertir(&x, &y); // paso la dirección de memoria de x e y para modificarlas
    printf("después de invertir: x = %d, y = %d\n", x, y);

    int a = 20, b = 15;
    printf("antes de ordenar: a = %d, b = %d\n", a, b);
    orden(&a, &b); // paso la dirección de memoria de a y b para modificarlas
    printf("después de ordenar: a = %d, b = %d\n", a, b);

    return 0;
}
