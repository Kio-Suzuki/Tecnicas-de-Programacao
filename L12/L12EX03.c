#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m1, **m2, l, c;
    printf ("Linhas: ");
    scanf ("%d", &l);
    printf ("Colunas: ");
    scanf ("%d", &c);
    m1 = malloc (l * sizeof(int*));
    for (int i = 0; i < l; i++){
        m1[i] = malloc(c * sizeof(int));
    }
    m2 = malloc (l * sizeof(int*));
    for (int i = 0; i < l; i++){
        m2[i] = malloc(c * sizeof(int));
    }
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            m1[i][j] = i + j;
            m2[i][j] = i * j;
        }
    }
    int m3[l][c];
    for (int i = 0; i < l; i++){
        for (int j = 0; j < c; j++){
            m3[i][j] = m1[i][j] + m2[i][j];
            printf ("%d ", m3[i][j]);
        }
        printf ("\n");
    }
    for (int i = 0; i < l; i++){
        free(m1[i]);
        free(m2[i]);
        free(m3[i]);   
    }
    free(m1);
    free(m2);
    free(m3);
    return 0;
}
  