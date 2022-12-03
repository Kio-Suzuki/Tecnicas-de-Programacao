#include <stdio.h>
    
int main()
{
    int x = 41;
    int y = x;
    int* pt = &x;
    x = x + 10;
    printf("x = %d\n", x);     // x = 51
    printf("&x = %d\n", &x);   // &x = endereço da variável x
    printf("y = %d\n", y);     // y = 41
    printf("&y = %d\n", &y);   // &y = endereço da variável y
    printf("pt = %d\n", pt);   // pt = endereço da variável x
    printf("&pt = %d\n", &pt); // &pt = endereço do ponteiro
    printf("*pt = %d\n", *pt); // *pt = 51
}