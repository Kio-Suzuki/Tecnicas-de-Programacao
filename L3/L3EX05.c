#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int m[3][4];
    srand(time(NULL));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            m[i][j] = rand()%2;
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            printf ("%d ", m[i][j]);
        }
        printf ("\n");
    }
    if (verificaMatrizEsparsa(m) == 1){
        printf ("A matriz e esparsa");
    }else{
        printf ("A matriz nao e esparsa");
    }
    return 0;
}

int verificaMatrizEsparsa(int m[][4])
{
    int i, j, cont = 0;
    for (i = 0; i < 3; i++){
        for (j = 0; j < 4; j++){
            if (m[i][j] == 0){
                cont++;
            }
        }
    }
    if (cont > (i*j)/2){
        return 1;
    }else{
        return 0;
    }
}