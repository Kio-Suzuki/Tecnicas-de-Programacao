#include <stdio.h>

int main()
{
    int x, *p, **q;
    //p = *x; -> ponteiros recebem endereço de memória
    q = &p;
    x = 30;
    printf("\n%d\n", &q);
}

