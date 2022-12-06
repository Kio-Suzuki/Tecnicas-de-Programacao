#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char palavras[100];
    char letra;
    int cont = 0;
    fp=fopen("dados.txt", "w");
    printf ("Palavras: ");
    fflush(stdin);
    fgets (palavras, 50, stdin);    
    fprintf (fp, "%s", palavras);
    printf ("Escolha uma letra: ");
    scanf (" %c", &letra);
    fp=fopen("dados.txt", "r");
    if (fp){
        while(!feof(fp)){
            fgets(palavras, 100, fp);
            puts(palavras);
            for (int i = 0; i < strlen(palavras); i++){
                if (palavras[i] == letra){
                    cont++;
                }
            }
            printf ("A letra %c aparece %d vezes", letra, cont);
        }
    }else{
        printf ("Erro!");
    }
    fclose(fp);
    fp = fopen("resultado.txt", "w");
    fprintf (fp, "A letra %c aparece %d vezes", letra, cont);
    fclose(fp);
    return 0;
}