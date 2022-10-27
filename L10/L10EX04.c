#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[3] = {9.8,7.7,8.0};
    float *p, **q;
    
    p = &a[0];
    q = &p+1;
    
    *p = *p + 1;
    
    **q = **q - 2;
     
    printf ("p = %.1f\n", *p);
    printf ("q = %.1f\n", **q);
    
}