#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

void preencheVetor(int *v, int n);

int main()
{
    int *v, n;
    scanf ("%d", &n);
    v = malloc (n * sizeof(int));
    preencheVetor(&v, n);
    for(int i = 0; i < n; i++){
        printf ("%f\n", v+i);
    }
    free(v);
}

void preencheVetor(int *v, int n)
{
    for(int i = 0; i < n; i++){
        v[i] = rand() % 100;
    }
}