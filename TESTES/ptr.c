#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, *ptrA;
    ptrA = (int *) malloc (5 * sizeof(int));
    printf("ptrA: %d\n", ptrA[0]);
    if(ptrA != NULL){
        printf("Memoria alocada via malloc\n");
    }
    int *ptrB;
    ptrB = (int *) calloc (5, sizeof(int));
    printf("ptrB: %d\n", ptrB[0]);
    if(ptrB != NULL){
        printf("Memoria alocada via calloc\n");
    }
    free(ptrA);
    free(ptrB);
    return 0; 
 }
