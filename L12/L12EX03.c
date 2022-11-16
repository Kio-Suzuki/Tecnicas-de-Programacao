#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **m1, **m2, l, c;
    printf ("Linhas: ");
    scanf ("%d", &l);
    printf ("Colunas: ");
    scanf ("%d", &c);
    m = malloc (l * sizeof(int));
    for (int i = 0; i < l; i++){
        m[i][j] = malloc(c * sizeof(int));
    }
}