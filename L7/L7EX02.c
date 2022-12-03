#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    enum festival {TheKillers=1, Muse, ArcticMonkeys, TheWeeknd, SystemofaDown};
    enum festival lineup;
    printf ("Qual posição de apresentação deseja saber: ");
    scanf ("%d", &lineup);
    switch (lineup)
    {
    case TheKillers:
        printf ("The Killers\n");
        break;
    case Muse:
        printf ("Muse\n");
        break;
     case ArcticMonkeys:
        printf ("Arctic Monkeys\n");
        break;
     case TheWeeknd:
        printf ("The Weeknd\n");
        break;
     case SystemofaDown:
        printf ("Systen of a Down\n");
        break;
    
    default:
        printf ("Nao ha bandas previstas para essa posicao\n");
        break;
    }
}   