#include <stdio.h>

void calculaFatoria();

int main()
{
    int n;
    printf ("Digite um valor: ");
    scanf ("%d", &n);
    calculaFatorial(n);
}

void calculaFatorial(int n)
{
    int i, r = 1;
    for (i = n; i > 0; i--){
        r = r * i;
    }
    printf ("O fatorial de %d = %d", n, r);
}