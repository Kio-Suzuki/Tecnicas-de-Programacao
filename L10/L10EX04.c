#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota[3], media;
    float *p, *q, *r;
    p = &nota[0];
    q = p + 1;
    r = q + 1;
     
    atribuiNota(nota, &media);
    
    printf ("p = %.1f\n", *p);
    printf ("q = %.1f\n", *q);
    printf ("r = %.1f\n", *r);
    printf ("media = %.1f\n", media);
}

void atribuiNota(float x[], float *media)
{
    for (int i = 0; i < 3; i++){
        printf ("Digite a nota: ");
        scanf ("%f", &x[i]);
        *media = ((x[0] + x[1] + x[2])/3);
    }

    
}