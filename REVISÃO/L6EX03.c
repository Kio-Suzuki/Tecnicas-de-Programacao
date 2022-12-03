#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

typedef struct 
{
    char nome[50];
    float nota1;
    float nota2;
}aluno;

typedef struct
{
    char nome[50];
    aluno alunos[5];
}turma;

void cadastrarTurma();
void cadastrarAlunos();
void apresentarAlunos();
void apresentarMedia();

int main()
{
    turma t;
    int opt;
    do{
        printf ("1 - Cadastrar Turma\n");
        printf ("2 - Cadastrar Aluno\n");
        printf ("3 - Apresentar Alunos\n");
        printf ("4 - Apresentar Media\n");
        printf ("Opção: ");
        scanf ("%d", &opt);
        switch (opt)
        {
        case 1:
            cadastrarTurma(t);
            break;

        case 2:
            cadastrarAlunos(t);
            break;
        
        case 3:
            apresentarAlunos(t);
            break;

        case 4:
            apresentarMedia(t);
            break;

        default:
            printf ("Escolha outra opção\n");
            break;
        }
    }while(opt >= 1 && opt <= 3);
    return 0;
}

void cadastrarTurma(turma t)
{
        printf ("Turma: ");
        fflush(stdin);
        fgets(t.nome, 50, stdin);
}


void cadastrarAlunos(turma t)
{
    for (int i = 0; i < 5; i++){
        printf ("Nome do aluno: ");
        fflush(stdin);
        fgets (t.alunos[i].nome, 50, stdin);
        printf ("Nota 1: ");
        scanf ("%f", &t.alunos[i].nota1);
        printf ("Nota 2: ");
        scanf ("%f", &t.alunos[i].nota2);
    }
}

void apresentarAlunos(turma t)
{
    for (int i = 0; i < 5; i++){
        printf ("Turma: %s", t.nome);
        printf ("Nome do aluno: %s", t.alunos[i].nome);
        printf ("Nota 1: %.1f\n", t.alunos[i].nota1);
        printf ("Nota 2: %.1f\n", t.alunos[i].nota2);
    }
}

void apresentarMedia(turma t)
{
    for (int i = 0; i < 5; i++){
        printf ("Nome do aluno: %s", t.alunos[i].nome);
        printf ("Media: %.1f\n", (t.alunos[i].nota1+t.alunos[i].nota2) / 2.0);
    }
}