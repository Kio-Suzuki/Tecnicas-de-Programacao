#include <stdio.h>
#include <stdlib.h>

void imprimeMatriz();

int main()
{
    int **m, l, c;
    printf ("Numero de linhas: ");
    scanf ("%d", &l);
    printf ("Numero de colunas: ");
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
    imprimeMatriz(m, l, c);
    free(m);
    return 0;
}

void imprimeMatriz(int **m, int l, int c)
{
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            printf ("%d ", m[i][j]);
        }
        printf ("\n");
    }
}