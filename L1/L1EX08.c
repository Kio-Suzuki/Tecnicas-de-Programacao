#include <stdio.h>

void calculaConsumo();

int main()
{
    int p, c;
    printf ("Quantidade de pessoas: ");
    scanf ("%d", &p);
    printf ("Quantidade de copos utilizados por pesso em 1 dia: ");
    scanf ("%d", &c);
    calculaConsumo(p, c);
    return 0;
}

void calculaConsumo(int pessoa, int copos)
{
    printf ("QUANTIDADE DE COPOS UTILIZADOS\n");
    printf ("1 dia = %d\n", pessoa*copos);
    printf ("7 dias = %d\n", pessoa*copos*7);
    printf ("30 dias = %d\n", pessoa*copos*30);
    printf ("365 dias = %d\n", pessoa*copos*365);
}