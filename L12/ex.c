#include <stdio.h>
#include <stdlib.h>

int recebeLC();

int main()
{
    
    int L, C, **m;
    int **m2;
    printf ("Linhas: ");
    scanf ("%d", &L);
    printf ("Colunas: ");
    scanf ("%d", &C);
    m = malloc(L * sizeof(int*));
    for (int i = 0; i < L; i++){
        m[i] = malloc(C * sizeof(int));
    }
    m2 = recebeLC(m, L, C);
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            printf ("%d ", m2[i][j]);
        }
        printf ("\n");
    }
    return 0;
}

int recebeLC(int **m, int L, int C)
{
    for (int i = 0; i < L; i++){
        for (int j = 0; j < C; j++){
            m[i][j] = i + j;
        }
    }
    return m;
}