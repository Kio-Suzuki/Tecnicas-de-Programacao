#include <stdio.h>

void triplicaValor(int *x);

int main()
{
    int x;
    printf ("Digite um numero: ");
    scanf ("%d", &x);
    triplicaValor(&x);
    printf ("Resultado = %d", x);
    return 0;
}

void triplicaValor(int *x)
{
    *x = *x * 3;
}