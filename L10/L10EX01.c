#include <stdio.h>

int main()
{
    float fpi = 3.1415, *pf, **ppf;
    pf = &fpi; // ponteiro recebe o endereço da variável fpi
    ppf = &pf; // ppf aponta para pf, logo para fpi
    printf("%f\n", **ppf); // valor da variável fpi
    printf("%f\n", *pf); // valor da variável fpi
    return(0);
}