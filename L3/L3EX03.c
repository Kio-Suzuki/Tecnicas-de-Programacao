#include <stdio.h>

int main()
{
     int *x, n;
    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    x = (int *) malloc(n * sizeof(int));
    for(int i = 0; i < n; i++){
        printf ("Digite um valor: ");
        scanf ("%d", &x[i]);
    } 
    printf ("Media = %d", calculaMedia(x, n));
    return 0;
}

int calculaMedia(int x[], int n)
{
    int media = 0;
    for (int i = 0; i < n; i++){
        media = media + x[i];
    }
    return media/n;
}