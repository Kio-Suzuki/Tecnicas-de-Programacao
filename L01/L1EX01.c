#include <stdio.h>

int maiorValor();

int main()
{
    printf ("O maior valor = %d", maiorValor());
}

int maiorValor ()
{
    int x = 5, y = 4;
    if (x > y){
        return x;
    }else{
        return y;
    }
}