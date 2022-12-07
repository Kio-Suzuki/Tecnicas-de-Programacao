#include <stdio.h>
#include <stdlib.h>

void apresentaMatriz();

int main()
{
    int **m, l, c;
    printf ("Numero de linhas: ");
    scanf ("%d", &l);
    m = malloc(l * sizeof(int*));
    printf ("Numero de colunas: ");
    scanf ("%d", &c);
    for (int i = 0; i < l; i++){
        m[i] = malloc(c * sizeof(int));
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            m[i][j] = i+j;
        }
    }
    apresentaMatriz(m, l, c);
    for (int i = 0; i < l; i++){
        free(m[i]);
    }
    free (m);
    return 0;
}

void apresentaMatriz(int **m, int c, int l)
{
    for (int i = 0; i < c; i++){
            for (int j = 0; j < l; j++){
                printf ("%d ", m[i][j]);
            }
            printf ("\n");
        }
}