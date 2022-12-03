#include <stdio.h>

int main()
{
    int x = 40;
    int y = x;
    int* pt = &x;
    printf("x = %d\n",x);       // x = 40
    printf("&x = %d\n",&x);     // &x = endereço da variável x
    printf("y = %d\n",y);       // y = 40
    printf("&y = %d\n",&y);     // y = endereço da variável y
    printf("pt = %d\n",pt);     // pt = endereço da variável x
    printf("&pt = %d\n",&pt);   // &pt = endereço do ponteiro
    printf("*pt = %d\n",*pt);   // *pt = 40
    return 0;
}