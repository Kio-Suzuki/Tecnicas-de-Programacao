#include <stdio.h>

int somaMatriz (int x[][3]);

int main()
{
    int x[4][3];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            printf ("Digite o valor: ");
            scanf ("%d", &x[i][j]);
        }
    }
    printf ("A soma de todos elementos = %d", somaMatriz(x));
}

int somaMatriz (int x[][3])
{
    int resultado = 0;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 3; j++){
            resultado = resultado + x[i][j];
        }
    } 
    return resultado;              
}