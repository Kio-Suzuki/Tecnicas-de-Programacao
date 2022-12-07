#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *v;
    v = malloc(200 * sizeof(int));
    for (int i = 0; i < 200; i++){
        v[i] = i;
        if (v[i] < 5 || v[i] > 194){
            printf ("v[%d] = %d \n", i, v[i]);
        } 
    }
    free(v);
    return 0;
}
