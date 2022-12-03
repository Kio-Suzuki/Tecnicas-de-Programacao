#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

typedef struct{
    char nome[50];
    int temp;
    int epi;
    int total;
}serie;

void adicionarSerie();
void pesquisarSerie();

int main()
{
    serie s[5];
    setlocale(LC_ALL,"Portuguese_Brasil.1252");
    adicionarSerie(s);
    pesquisarSerie(s);
    return 0;
}

void adicionarSerie(serie s[])
{
    for (int i = 0; i < 5; i++){
        printf ("INFORMAÇÕES DA SÉRIE\n");
        printf ("Nome: ");
        fflush(stdin);
        fgets (s[i].nome, 50, stdin);
        printf ("Temporadas: ");
        scanf ("%d", &s[i].temp);
        printf ("Episódios por temporada: ");
        scanf ("%d", &s[i].epi);
        s[i].total = (s[i].temp * s[i].epi);
    }
}

void pesquisarSerie(serie s[])
{
    int opt, aux = 0, x = 0;
    do{
        printf ("\nPESQUISAR SÉRIE\n");
        printf ("1-Série com maior quantidade de temporadas\n");
        printf ("2-Série com maior quantidade de episódios por temporadas\n");
        printf ("3-Série com maior quantidade de episódios\n");
        printf ("4-Sair\n");
        printf ("Opção: ");
        scanf ("%d", &opt);
        switch (opt)
        {
        case 1:
            for (int i = 0; i < 5; i++){
                if (s[i].temp > x){
                    x = s[i].temp;
                    aux = i;
                }
            }
            printf ("SÉRIE:\n");
            printf ("%s", s[aux].nome);
            printf ("Temporadas: %d\n", s[aux].temp);
            printf ("Episódios: %d\n", s[aux].epi);
            printf ("Total de episódios: %d\n", s[aux].total);
            break;

        case 2:
            for (int i = 0; i < 5; i++){
                if (s[i].epi > x){
                    x = s[i].epi;
                    aux = i;
                }
            }
            printf ("SÉRIE:\n");
            printf ("%s", s[aux].nome);
            printf ("Temporadas: %d\n", s[aux].temp);
            printf ("Episódios: %d\n", s[aux].epi);
            printf ("Total de episódios: %d\n", s[aux].total);
            break;

        case 3:
            for (int i = 0; i < 5; i++){
                if (s[i].total > x){
                    x = s[i].total;
                    aux = i;
                }
            }
            printf ("SÉRIE:\n");
            printf ("%s", s[aux].nome);
            printf ("Temporadas: %d\n", s[aux].temp);
            printf ("Episódios: %d\n", s[aux].epi);
            printf ("Total de episódios: %d\n", s[aux].total);
            break;

        case 4:
            printf ("Até mais!");    
            break;      

        default:
            printf ("Escolha outra opção\n");
            pesquisarSerie(s);
            break;
        }
    }while(opt >= 1 && opt <= 3);
}