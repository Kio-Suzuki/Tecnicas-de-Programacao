#include <stdio.h>

void troca (int *i, int *j) 
{
    int *temp;
    *temp = *i; // temp recebe valor de i
    *i = *j; // i recebe valor de j
    *j = *temp; // j recebe valor de temp
}

int main()
{
    int *p, *j;
    troca (&p, &j);
    printf ("%d %d", *p, *j);
}
