#include <stdio.h>
#include <stdlib.h>

int criaMatriz();

int main()
{
    int **m2;
    m2 = criaMatriz();
   for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf ("%d ", m2[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

int criaMatriz()
{
    int L, C, **m;
    printf ("Linhas: ");
    scanf ("%d", &L);
    printf ("Colunas: ");
    scanf ("%d", &C);
    m = malloc(L * sizeof(int*));
    for (int i = 0; i < L; i++){
        m[i] = malloc(C * sizeof(int));
    }
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            m[i][j] = i + j;
        }
    }
    return m;
}