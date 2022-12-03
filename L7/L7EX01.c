#include <stdio.h>
#include <stdlib.h>

int main()
{
    enum semana {Domingo = 1, Segunda = 2, Terca = 3, Quarta = 4, Quinta = 5, Sexta = 6, Sabado = 7};
    enum semana x;
    printf ("Informe o dia: ");
    scanf ("%d", &x);
    switch (x)
    {
    case 1:
        printf ("Domingo");
        break;

    case 2:
        printf ("Segunda-feira");
        break;

    case 3:
        printf ("Terca-feira");
        break;

    case 4:
        printf ("Quarta-feira");
        break;

    case 5:
        printf ("Quinta-feira");
        break;

    case 6:
        printf ("Sexta-feira");
        break;

    case 7:
        printf ("Sabado");
        break;
    
    default:
        break;
    }    

}