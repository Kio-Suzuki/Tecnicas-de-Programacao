#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int verificaMatriz();

int main()
{
    int m[3][4];
    srand(time(NULL));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            m[i][j] = rand()%2;
        }
    }
    if (verificaMatriz(m) == 1){
        printf ("A matriz e esparsa");
    }else{
        printf ("A matriz nao e esparsa");
    }
    return 0;
}

int verificaMatriz(int m[][4])
{
    int aux = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if (m[i][j] == 0){
                aux++;
            }
        }
    }
    if(aux > 6){
        return 1;
    }else{
        return 0;
    }
}