#include <stdio.h>

struct Estudante{
    char nome[50];
    char curso[30];
    float nota1, nota2, media;
};

int main()
{
    int n;
    printf ("Numero de estudantes: ");
    scanf ("%d", &n);
    struct Estudante e[n];
    fflush(stdin);
    for (int i = 0; i < n; i++){
        printf ("Nome: ");
        scanf ("%s", e[n].nome);
        printf ("Curso: ");   
         scanf ("%s", e[n].curso);
        printf ("Nota 1: ");
        scanf ("%f", &e[n].nota1);   
        printf ("Nota 2: ");   
        scanf ("%f", &e[n].nota2);
        e[n].media = (e[n].nota1 + e[n].nota2)/2;  
    }
}