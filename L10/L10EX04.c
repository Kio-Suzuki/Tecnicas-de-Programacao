#include <stdio.h>
#include <stdlib.h>

void atribuiNota(float nota[]);

int main()
{
    float nota[3];
    float *p, *q, *r;
    atribuiNota(nota);
    p = &nota[0];
    q = p + 1;
    r = q + 1;
    if ((*p + *q + *r)/3 >= 6){
        printf ("Aprovado");
    }else{
        printf ("Reprovado");
    }
    return 0;
}

void atribuiNota(float x[])
{
    for (int i = 0; i < 3; i++){
        printf ("Digite a nota: ");
        scanf ("%f", &x[i]);
    } 
}