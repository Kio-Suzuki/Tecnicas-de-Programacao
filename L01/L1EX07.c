#include <stdio.h>

int somaIntervalo();

int main()
{
    int a, b;
    printf ("Digite o valor de a: ");
    scanf ("%d", &a);
    printf ("Digite o valor de b: ");
    scanf ("%d", &b);
    printf ("A soma dos numeros pares entre %d e %d = %d", a, b, somaIntervalo(a, b));
}

int somaIntervalo(int n1, int n2)
{
    int i, s;
    if (n1 > n2){
        for (i = n1-1; i > n2; i--){
            if (i % 2 == 0){
                s = s + i;
            }
        }
    }else{
        for (i = n2-1; i > n1; i--){
            if (i % 2 == 0){
                s = s + i;
            }
        }  
    }
    return s;
}