#include <stdio.h>
#include <stdlib.h>

int verificaValores();

int main()
{
    int **m, l, c, v;
    printf ("Linhas: ");
    scanf ("%d", &l);
    printf ("Colunas: ");
    scanf ("%d", &c);
    m = malloc(l * sizeof(int));
    for (int i = 0; i < l; i++){
        m[i] = malloc(c * sizeof(int));
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            m[i][j] = rand() %10;
        }
    }
    for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                printf ("%d ", m[i][j]);
            }
            printf ("\n");
    }
    printf ("Valor a ser verificado: ");
    scanf ("%d", &v);
    printf ("%d", verificaValores(m, l, c, v));
}

int verificaValores(int **m, int l, int c, int v)
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            if (m[i][j] == v){
                return 1;
            }
        }
    }
    return 0;
}