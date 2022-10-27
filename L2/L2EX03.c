#include <stdio.h>

float calculaMedia(float nota[]);

int main()
{
    float nota[6];
    for (int i = 0; i < 6; i++){
        printf ("Digite o valor da nota: ");
        scanf ("%f", &nota[i]);
    }
    printf ("Media = %.1f", calculaMedia(nota));
}

float calculaMedia(float nota[])
{
    float media = 0;
    for (int i = 0; i < 6; i++){
        media = media + nota[i];    
    }
    return media/6;
}
