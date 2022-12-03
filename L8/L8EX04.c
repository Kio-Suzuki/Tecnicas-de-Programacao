#include <stdio.h>

int main()
{
    int x = 40;
    int y = x;
    int *pt = &x;
    printf("x = %d\n",x);       // x = 40
    printf("&x = %d\n",&x);     // &x = endereço da variável x
    printf("y = %d\n",y);       // y = 40
    printf("&y = %d\n",&y);     // &y = endereço da variável y
    printf ("\n*pt = &x");
    printf("\nEndereco que pt aponta pt = %d\n",pt);     // pt = endereço da variável x
    printf("Endereco do ponteiro &pt = %d\n",&pt);   // *pt = endreço de pt +/- 8
    printf("Conteudo da variavel que aponta *pt = %d\n",*pt);   // *pt = endreço de pt +/- 8
    printf ("\npt = pt + 2\n");
    pt = pt + 2;                // pt recebeu o endereço do pt +/- 8
    printf("\npt = %d\n",pt);   // &pt = endereço de pt
    printf("&pt = %d\n",&pt);   // *pt = endreço de pt +/- 8
    printf("*pt = %d\n",*pt);   // *pt = endreço de pt +/- 8
    return 0;
}