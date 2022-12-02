#include <stdio.h>

int main()
{
    int a, b, c;
    printf ("Digite 3 valores: ");
    scanf ("%d %d %d", &a, &b, &c);
    if (a > b && a > c){
        printf ("O maior valor = %d\n", a);
    }else if (b > a && b > c){
        printf ("O maior valor = %d\n", b);
    }else{
        printf ("O maior valor = %d\n", c);
    }
      if (a < b && a < c){
        printf ("O menor valor = %d\n", a);
    }else if (b < a && b < c){
        printf ("O menor valor = %d\n", b);
    }else{
        printf ("O menor valor = %d\n", c);
    }
    printf ("A media dos valores = %d", (a+b+c)/3);
    return 0;
}