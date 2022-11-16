#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int **mat, i;
    mat = malloc(3 * sizeof(int*));
    for(i = 0; i < 3; i++){
        mat[i] = malloc(4 * sizeof(int));
    }
    for(i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = rand % 2;
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}