#include <stdio.h>

int somaInvervalo();

int main()
{
    int x, y, z;
    printf ("N1 = ");
    scanf ("%d", &x);
    printf ("N2 = ");
    scanf ("%d", &y);
    z = somaIntervalo(x, y);
    if (x < y){
        printf ("A soma dos numeros pares do intervalo entre %d e %d = %d", x, y, z);
    }else{
        printf ("A soma dos numeros pares do intervalo entre %d e %d = %d", y, x, z);
    
    }
    return 0;
}

int somaIntervalo(int x, int y)
{
    int soma = 0;
    if (x < y){
        for (int i = x+1; i < y;i++){
            if (i %2 == 0){
                soma = soma + i;
            }
        }
    }else{
        for (int i = y+1; i < x; i++){
            if (i %2 == 0){
                soma = soma +i;
            }
        }
    }
    return soma;
}