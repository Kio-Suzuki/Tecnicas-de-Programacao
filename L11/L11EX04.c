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
        printf ("%d\n", vet[i]);
    }
    printf ("Qual valor deseja procurar: ");
    scanf ("%d", &x);
    printf ("%d", procura(&vet, n, x));
}

int procura(int *vet, int n, int x)
{
    for (int i = 0; i < n; i++){
        if (vet[i] == x){
            return 1;
        }else{
            return 0;
        }  
    }
}