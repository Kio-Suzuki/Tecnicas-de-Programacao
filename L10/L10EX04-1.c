#include <stdio.h>

int main()
{
    int nota[3], aux;
    int *media = 0;
    for (int i = 0; i < 3; i++){
        printf ("Digite a nota %d: ", i+1);
        scanf ("%d", &nota[i]);
        *media = *media + nota[i];
    }
    if ((*media/3) >= 6){
        printf ("AProvado!");
    }else{
        printf("Reprovado.");
    }
    return 0;
}
