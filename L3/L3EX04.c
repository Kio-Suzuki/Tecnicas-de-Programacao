#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m1[4][4], m2[4][4];
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            m1[i][j] = rand()%10;
            m2[i][j] = rand()%10;
        }
    }
    printf ("Matriz 1\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
        printf ("%d ", m1[i][j]);
        }
        printf ("\n");
    }
    printf ("\nMatriz 2\n");
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
        printf ("%d ", m2[i][j]);
        }
        printf ("\n");
    }

    if (verificaMatriz(m1, m2) == 1){
        printf ("\nAs matrizes são iguais");
    }else{
        printf ("\nAs matrizes são diferentes");
    }
    return 0;
}

int verificaMatriz(int m1[][4], int m2[][4])
{
    int aux = 1;
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            if (m1[i][j] != m2[i][j]){
                aux = 0;
            }
        }
    }
    return aux;
}