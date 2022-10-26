#include <stdio.h>
#include <math.h>

float arredondaValor(float x)
{
    return round(x);
}

int main()
{
    float x;
    printf ("Digite um valor: ");
    scanf ("%f", &x);
    printf ("O valor arredondado de %.1f = %.1f", x, arredondaValor(x));

}


