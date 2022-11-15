#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int n;
    float *v, media = 0;
    printf ("Numero de nota: ");
    scanf ("%d", &n);
    v = malloc(n * sizeof(float));
    if (v == NULL){
        printf ("Espaço insuficiente\n");
    }else{
        printf ("Espaço alocado\n");
    }
    for (int i = 0; i < n; i++){
        printf ("Nota: ");
        scanf ("%f", &v[i]);
        media = media + v[i];   
    }
    printf ("Media = %.1f\n", (media/n));
    free(v);
    return 0;
}