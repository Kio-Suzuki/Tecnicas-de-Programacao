#include <stdio.h>
#include <string.h>

typedef struct Cadastro{
    char marca[20];
    int ano;
    float preco;
}carros;

int main()
{
    carros c[6];
    int i, opt, ano;
    float preco;
    cadastraCarro(c);
    do{
        printf ("1-Pesquisar carro por ano\n");
        printf ("2-Pesquisar carro por valor\n");
        printf ("3-Sair\n");
        scanf ("%d", &opt);
        switch(opt){
            case 1:
                printf ("Ano: ");
                scanf ("%d", &ano);
                for (i = 0; i < 6; i++){
                    if(ano == c[i].ano){
                        printf ("Marca: %s\n", c[i].marca);
                        printf ("Preco: %f\n", c[i].preco);
                    }
                }
                break;
            case 2:
                printf ("Preco: ");
                scanf ("%d", &preco);
                for (i = 0; i < 6; i++){
                    if(preco <= c[i].preco){
                        printf ("Marca: %s\n", c[i].marca);
                        printf ("Ano: %d\n", c[i].ano);
                    }
                }
                break;

        }
    }while(opt != 3);
}

void cadastraCarro (carros c[])
{
    for (int i = 0; i < 6; i++){
        printf ("Nome: ");
        scanf ("%s", c[i].marca);
        printf ("Ano: ");
        scanf ("%d", &c[i].ano);
        printf ("Preco: ");
        scanf ("%f", &c[i].preco);
    }
}