#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *notas, m = 0;
    int n;
    printf ("Quantidade de notas: ");
    scanf ("%d", &n);
    notas = malloc(n*sizeof(notas));
    if (notas == NULL){
        printf ("Espaco nao alocado\n");
        return 0;
    }else{
        printf ("Espaco alocado\n");
    }
    for (int i = 0; i < n; i++){
        printf ("Nota: ");
        scanf ("%f", &notas[i]);
        m = m + notas[i];
    }
    printf ("Media = %.1f", m/n);
    free(notas);
    return 0;
}