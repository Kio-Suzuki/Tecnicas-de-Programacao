#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    int matricula;
    char nome[20];
    data nasc;
}aluno;

void cadastrarAluno();

int main()
{
    aluno *a;
    int n;
    printf ("Quantidade de alunos: ");
    scanf ("%d", &n);
    a = malloc (n*sizeof(aluno));
    cadastrarAluno(a, n);
    for (int i = 0; i < n; i++){
        printf ("Matricula: %d\n", a[i].matricula);
        printf ("Nome: %s", a[i].nome);
        printf ("Nascimento: %d/%d/%d\n", a[i].nasc.dia, a[i].nasc.mes, a[i].nasc.ano);
    }
    free (a);
    return 0;
}

void cadastrarAluno(aluno *a, int n)
{
    for (int i = 0; i < n; i++){
        printf ("Matricula: ");
        scanf ("%d", &a[i].matricula);
        printf ("Nome: ");
        fflush(stdin);
        fgets (a[i].nome, 50, stdin);
        printf ("Nascimento\n");
        printf ("Dia: ");
        scanf ("%d", &a[i].nasc.dia);
        printf ("Mes: ");
        scanf ("%d", &a[i].nasc.mes);
        printf ("Ano: ");
        scanf ("%d", &a[i].nasc.ano);
    }
}

