#include <stdio.h>
#include <stdlib.h>

int main (){
    char *ptr;
    ptr = malloc (1);
    if (ptr == NULL) {
        printf("Espaço insuficiente.\n");
        exit(0);
    }else{
        printf("Espaço alocado");
    }
    free(ptr);
    return 0;
}