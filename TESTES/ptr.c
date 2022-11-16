#include <stdio.h>
int main()
{
    int idade = 10;
    int *ptr;
    ptr = &idade;
    printf ("Variavel idade: %d\n", idade);
    printf ("Variavel ponteiro ptr: %x\n", ptr);
    printf ("Variavel ponteiro ptr: %d\n", *ptr);
    return 0;
}