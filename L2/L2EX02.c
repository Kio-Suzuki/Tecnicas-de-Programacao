#include <stdio.h>

int main()
{
    int x[5], y[5];
    for (int i = 0; i < 5; i++){
        printf ("Digite um valor para vetor 1: ");
        scanf ("%d", &x[i]);
    }
    for (int i = 0; i < 5; i++){
        printf ("Digite um valor para vetor 2: ");
        scanf ("%d", &y[i]);
    }
    multiplicaVetor(x, y);
    return 0;
}

void multiplicaVetor(int x[], int y[])
{
    int z[5];
    for (int i = 0; i < 5; i++){
        printf ("%d x %d = %d\n", x[i], y[i], x[i] * y[i]);
    }
}