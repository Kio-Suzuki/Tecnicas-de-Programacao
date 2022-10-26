#include <stdio.h>

float calculaDesconto(float x)
{
    return (x*0.5);
}

float calculaJuros(float x)
{
    return (x*1.5);
}

int main()
{
    float x;
    int opt;
    do{
        printf ("Digite um valor: ");
        scanf ("%f", &x);
        printf ("1 - Calcular Desconto\n");
        printf ("2 - Calcular Juros\n");
        scanf ("%d", &opt);
        switch(opt){
            case 1:
                printf ("O valor com desconto = %.2f\n", calculaDesconto(x));
                break;
            
            case 2:
                printf ("O valor com juros = %.2f\n", calculaJuros(x)); 
                break;
        }
    }while(opt == 1 || opt == 2);
    return 0;
}
