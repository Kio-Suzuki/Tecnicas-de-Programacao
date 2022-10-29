#include <stdio.h>

int main()
{
    int x, y, *p; 
    y = 0;
    p = &y; // p aponta para endereço de y
    x = *p; // x recebe valor de p, logo y 
    x = 4; // x recebe 4
    (*p)++; // valor de p + 1, logo y = 1
    --x; // x - 1, logo x = 3
    (*p) += x; // valor de p + x, logo y = 4
    printf("x=%d y=%d *p=%d", x, y, *p); // x=3 y=4 *p=4
}