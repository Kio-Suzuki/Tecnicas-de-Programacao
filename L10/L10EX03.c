#include <stdio.h>

int main()
{
    int a, *pa, **ppa, ***pppa;
    a = 0; 
    pa = &a; // pa aponta para endereço de a
    ppa = &pa; // ppa aponta para pa, logo a
    pppa = &ppa; // pppa aponta para ppa, logo a
    a = a + 1; // a passa a valer 1
    printf("\n%d", a); // a = 1
    *pa = *pa + 1; // a + 1 = 2
    printf("\n%d", a); // a = 2
    **ppa = **ppa + 1; // a + 1 = 3
    printf("\n%d", a); // a = 3
}