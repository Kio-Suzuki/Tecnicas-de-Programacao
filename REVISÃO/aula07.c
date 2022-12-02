#include <stdio.h>
#include <string.h>

typedef struct estudante{
    char nome[50];
    char curso[30];
    float nota1;
    float nota2;
    float media;
}std;

void cadastrarAluno();
void apresentarAluno();

int main()
{
    int x;
    printf ("Quantos alunos ira cadastrar: ");
    scanf("%d", &x);
    std s[x];
    cadastrarAluno(s, x);
    apresentarAluno(s, x);
    return 0;
}

void cadastrarAluno(std *s, int x)
{
    for (int i = 0; i < x; i++){
        printf ("Nome: ");
        fflush(stdin);
        fgets (s[i].nome, 50, stdin);
        printf ("Curso: ");
        fflush(stdin);
        fgets (s[i].curso, 30, stdin);
        printf ("Nota 1: ");
        scanf ("%f", &s[i].nota1);
        printf ("Nota 2: ");
        scanf ("%f", &s[i].nota2);
        s[i].media = (s[i].nota1 + s[i].nota2)/2;
    }
}

void apresentarAluno(std *s, int x)
{
    for (int i = 0; i < x; i++){
        printf ("Nome: %s", s[i].nome, 50, stdin);
        printf ("Curso: %s", s[i].curso, 30, stdin);
        printf ("Nota 1: %.1f\n", s[i].nota1);
        printf ("Nota 2: %.1f\n", s[i].nota2);
        printf ("Media: %.1f\n", s[i].media);
    }
}