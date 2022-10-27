#include <stdio.h>

int main()
{
    int x[5], y[2];
    for (int i = 0; i < 5; i++){
        printf ("Digite a idade: ");
        scanf ("%d", &x[i]); 
    }
    verificaMinMax(x, y);
    printf ("Idade minima: %d\n", y[0]);
    printf ("Idade maxima: %d\n", y[1]);
}

void verificaMinMax(int x[], int y[])
{
    int maior = x[0], menor = x[0];
    for (int i = 1; i < 5; i++){
        if (x[i] < menor){
            menor = x[i];
        }
    }
    y[0] = menor;
    for (int i = 1; i < 5; i++){
        if (x[i] > maior){
            maior = x[i];
        }
    }
    y[1] = maior;
}

