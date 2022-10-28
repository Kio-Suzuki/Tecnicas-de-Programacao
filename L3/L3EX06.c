#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void mesclaVetores(int x[], int y[], int z[]);

int main()
{
    int i, x[5], y[5], z[10];
    srand(time(NULL));
    for (i = 0; i < 5; i++){
        x[i] = rand()%10;
        y[i] = rand()%10;
    }
    for (i = 0; i < 5; i++){
        printf ("%d ", x[i]);
    }
    printf ("\n");
    for (i = 0; i < 5; i++){
        printf ("%d ", y[i]);
     }
    mesclaVetores(x, y, z);
    printf ("\n");
    for (i = 0; i < 10; i++){
        printf ("%d ", z[i]);
    }
    return 0;
}

void mesclaVetores(int x[], int y[], int z[])
{
    int cont = 0;
    for (int i = 0; i < 10; i++){
        if (i%2 == 0){
            cont++;
            if (i == 0){
                z[i] = x[i];
            }else{
                z[i] = x[i/2];
            }
        }else{
            z[i] = y[i-cont];
        }
    }
}
