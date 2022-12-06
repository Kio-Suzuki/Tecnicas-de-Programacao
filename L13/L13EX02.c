#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp;
    char texto[200];
    int cont = 0;
    fp = fopen ("arquivo.txt","w");
    printf ("Frase: ");
    fflush(stdin);
    fgets (texto, 200, stdin);
    fprintf (fp, "%s", texto);
    fp=fopen("arquivo.txt", "r");
    if (fp){
        while(!feof(fp)){
            fgets(texto, 200, fp);
            puts(texto);
            for (int i = 0; i < strlen(texto); i++){
                if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
                    cont++;
                }
            }
            printf ("No texto ha %d vogais", cont);
        }
    }else{
        printf ("Erro!");
    }
    fclose(fp);
}