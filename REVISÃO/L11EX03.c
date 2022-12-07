#include <stdio.h>
#include <stdlib.h>

void preencheVetor();

int main()
{
    int n, *v;
    printf ("n = ");
    scanf ("%d", &n);
    v = malloc(n*sizeof(v));
    preencheVetor(v, n);
    for (int i = 0; i < n; i++){
        printf ("v[%d] = %d\n", i, v[i]);
    }
    free(v);
    return 0;
}

void preencheVetor(int *v, int n)
{
    for (int i = 0; i < n; i++){
        printf ("v[%d] = ", i);
        scanf ("%d", &v[i]);
    }
}
