#include <stdio.h>
#include <math.h>

int calculaCubo();

int main()
{
    int x;
    printf ("Digite um valor: ");
    scanf ("%d", &x);
    printf ("O valor ao cubo de %d = %d", x, calculaCubo(x));
    return 0;
}

int calculaCubo(int x)
{
    return pow(x,3);
}