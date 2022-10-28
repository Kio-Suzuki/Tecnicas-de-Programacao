#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[20], x;
    int i, cont = 0;
    printf ("Digite uma palavra: ");
    scanf ("%s", palavra);
    printf ("Digite uma letra: ");
    scanf (" %c", &x);
    for (i = 0; i < strlen(palavra); i++){
        if (palavra[i] == x){
            cont++;
        }
    }
    printf ("O caractere %c aparece %d vezes", x, cont);
    return 0;
}