#include <stdio.h>
#include <stdlib.h>

int verificaNumero(int v[], int n, int x);

int main()
{
    int x, n, *v;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    v = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf ("Digite o valor: ");
        scanf ("%d", &v[i]);
    }
    printf ("Qual valor deseja encontrar? ");
    scanf ("%d", &x);
    verificaNumero(v, n, x);
    if (verificaNumero(v, n, x) != -1){
        printf ("Indice: %d", verificaNumero(v, n, x));
    }else{
        printf ("Não encontrado");
    }
    return 0;
} 

int verificaNumero(int v[], int n, int x)
{
    int p = -1;
    for (int i = 0; i < n; i++){
        if (v[i] == x){
            p = i;
            if (p != -1){
                return p;
            }
        }
    }
    return p;
}
