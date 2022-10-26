#include <stdio.h>

int verificaMaximo();

int main()
{
    int x[10];
    for (int i = 0; i < 10; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &x[i]);
    }
    printf ("O maior valor do vetor = %d", verificaMaximo(x));
    return 0;
}

int verificaMaximo(int x[])
{
    int y;
    for (int i = 0; i < 10; i++){
        if (x[i] > x[i+1]){
            y = x[i];
        }else{
            y = x[i+1];
        }
    }
    return y;
}