#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int cod;
    printf ("%d ", gerarCodigo());
}

void gerarCodigo()
{
    int cod[10][10], i, j, cont = 0; 
    char id[11] = "0000000000";
    srand(time(NULL));
    for (i = 0; i < 10; i++){                                      
        for (j = 0; j < 10; j++){                              
            cod[i][j] = rand() %2;                               
        } 
    }
    for (i = 0; i < 10; i++){                                      
        for (j = 0; j < 10; j++){                              
            printf ("%d ", cod[i][j]);                              
        }
        printf ("\n");
    }   
    printf ("\nCodigo:\n");
    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            if (cod[j][i] == 1){
                cont++;
            }   
            if (cont >= 5){
            id[i] = '1';
            }else{
            id[i] = '0';
            cont = 0;
            printf ("id[%d] = %s\n", i, id);  
            }   
        }
    }
    
    printf ("codigo na string = %s", id); 
}
    