#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    v = malloc(200 * sizeof(int));
    for (int i = 0; i < 200; i++){
        v[i] = i;
        printf ("%d\n", v[i]);
    }
    free(v);

}
