#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int x = 0;
    char nome[50];
    printf ("Nome completo: ");
    fflush(stdin);
    fgets (nome, 50, stdin);
    for (int i = 0; i < strlen(nome); i++){
        if (nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u' || nome[i] == 'A' || nome[i] == 'E' || nome[i] == 'I' || nome[i] == 'O' || nome[i] == 'U'){
            x++;
        }
    }
    printf ("Ha %d vogais no nome %s", x, nome);
    return 0;
}