#include <stdio.h>
#include <time.h>
 
int main() {
    int senha[3][5], i, j, cont1=0, cont0=0, senha_correta[5];
    srand(time(NULL));
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            senha[i][j] = rand()%2;
            printf ("%d ", senha[i][j]);
        }
        printf ("\n");
    }
    for (i = 0; i < 5; i++){
        for(j = 0; j < 3; j++)
            if(senha[j][i] == 1){
                cont1++;
            }else{
                cont0++;
            }
            if(cont1 > cont0){
                senha_correta[i] = 1;
            }else if(cont1 == cont0){
                senha_correta[i] = 1;
            }else{
                senha_correta[i] = 0;
            }
            cont1=0;
            cont0=0;
    }
    for (i = 0; i < 5; i++){
        printf ("%d ", senha_correta[i]);
    }
    
}
