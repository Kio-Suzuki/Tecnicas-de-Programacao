#include <stdio.h>
#include <stdlib.h>

int procura(int *vet, int n, int x);

int main()
{
    int *vet, n, x;
    printf ("Tamanho do vetor: ");
    scanf ("%d", &n);
    vet = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        vet[i] = 1+i;
        printf ("vet[%d] = %d\n", i, vet[i]);
    }
    printf ("Qual valor deseja procurar: ");
    scanf ("%d", &x);
    printf ("%d", procura(&vet, n, x));
}

int procura(int *vet, int n, int x)
{
    int cont = 0;
    for (int i = 0; i < n; i++){
        printf ("vet[%d] = %d\n", i, vet[i]);
        if (vet[i] == x){
            cont+1;    
        }
    }
    if (cont == 1){
        return 1;
    }else{
        return 0;
    }
}