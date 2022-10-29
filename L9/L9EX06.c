#include <stdio.h>

typedef struct 
{
    int ID;
    char nome[50];
    int idade;
    float nota;
}aluno;

int main()
{
    aluno a1;
    aluno *paluno = &a1;
   // printf ("ID: ");
    //scanf ("%d ", (*paluno).ID);
   // printf ("Nome: ");
   // scanf ("%s", (*paluno).nome);
    //printf ("Idade: ");
    //scanf ("%d", (*paluno).idade);
    //printf ("Nota: ");
    //scanf ("%f", (*paluno).nota);
    (*paluno).ID = 5;
    (*paluno).nome[50] = "Marcelo";
    (*paluno).idade = 18;
    (*paluno).nota = 8.5;

    printf ("Apresentacao utilizando a variavel:\n");
    printf ("ID: %d\n", a1.ID);
    printf ("Nome: %s\n", a1.nome);
    printf ("Idade: %d\n", a1.idade);
    printf ("Nota: %.1f\n", a1.nota);
    printf ("Apresentacao utilizando o ponteiro:\n");
    printf ("ID: %d\n", paluno->ID);
    printf ("Nome: %s\n", paluno->nome);
    printf ("Idade: %d\n", paluno->idade);
    printf ("Nota: %.1f\n", paluno->nota);
    return 0;
}