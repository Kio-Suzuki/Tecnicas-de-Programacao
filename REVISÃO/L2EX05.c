#include <stdio.h>

int somaMatriz();

int main()
{
    int m[4][3];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf ("Insira um numero: ");
            scanf ("%d", &m[i][j]);
        }
    }
    printf ("A soma da matriz = %d", somaMatriz(m));
}

int somaMatriz(int m[][3])
{
    int soma = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 3; j++){
            soma = soma + m[i][j];
        }
    }
    return soma;
}