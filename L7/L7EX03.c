#include <stdio.h>
#include <strings.h>
#include <stdlib.h>

typedef struct 
{
    char nome[50];
    int idade;
    float nota;
    enum genero {feminino, masculino};
}estudantes;

void cadastrarEstudantes();
void apresentarEstudantes();
void aprovadosEstudantes();
void apresentarF();
void apresentarMaiorNota();
void apresentarMedia();

int main()
{
    estudantes e[6];
    
    cadastrarEstudantes(e);
}

void cadastrarEstudantes(estudantes e[])
{
    enum genero x;
    for (int i = 0; i < 6; i++){
        printf ("Nome: ");
        fflush(stdin);
        fgets (e[i].nome, 50, stdin);
        printf ("Idade: ");
        scanf ("%d", &e[i].idade);
        printf ("Nota: ");
        scanf ("%f", &e[i].nota);
        printf ("Genero: ");
        scanf ("%d", &x);
    }
}

void apresentarEstudantes(estudantes e[])
{
    for (int i = 0; i < 6; i++){
        printf ("Nome: ");
        fflush(stdin);
        fgets (e[i].nome, 50, stdin);
        printf ("Idade: ");
        scanf ("%d", &e[i].idade);
        printf ("Nota: ");
        scanf ("%f", &e[i].nota);
        printf ("Genero: ");
        scanf ("%d", &x);
    }
}

