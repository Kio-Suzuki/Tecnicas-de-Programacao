#include <stdio.h>
#include <stdlib.h>

int* realocaVetor(int *ptr, int *size);
void listaVetor(int *ptr, int size);
int menu();

int main() {
    int opcao, size=0, *ptr=NULL;
    do {
        opcao = menu();
        switch(opcao){
            case 0: 
                opcao=0; 
                break;
            case 1: 
                ptr = realocaVetor(ptr, &size); 
                break;
            case 2:    
                listaVetor(ptr, size); 
                break;
            default: 
                printf("Escolha outra  opcao!\n");
        }
    }while(opcao != 0);
    free(ptr);
    return 0; 
}

int* realocaVetor(int *ptr, int *size) {
    int i, add=0, total;
    printf("Informe a quantidade de numeros a ser adicionada: ");
    scanf("%d", &add);
    total = *size + add;
    ptr = (int *) realloc(ptr, (total * sizeof(int)));
    if(ptr) {
        for(i=0; i < add; i++) {
        printf("Informe numero %d: ", i);
        scanf("%d", &ptr[*size + i]);
        }
    *size += add;
    } else {
        printf("Espaço em memória insuficiente\n");
        free(ptr);
        exit(1);
    }
    return ptr; 
 }

 void listaVetor(int *ptr, int size) 
 {
    int i;
    for(i=0; i < size; i++){
        printf("%d\n", ptr[i]);
    } 
}

int menu() 
{
    int opcao;
    printf("\nO que deseja: \n");
    printf("0. Sair\n");
    printf("1. Adicionar numeros ao vetor\n");
    printf("2. Listar numeros do vetor\n");
    printf("Opcao: ");
    scanf("%d", &opcao);
    return opcao; 
}
