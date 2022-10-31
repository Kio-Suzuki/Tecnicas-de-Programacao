#include <stdio.h>
#include <string.h>

struct Estudante{
    char nome[50];
    char curso[30];
    float nota1, nota2, media;
};

int main()
{
    
    
    struct Estudante *e;
    int n;
    printf ("Numero de estudantes: ");
    scanf ("%d", &n);
    n = (int *) malloc(n * sizeof(struct Estudante));


    for (int i = 0; i < n; i++){
        printf ("Nome: ");
        scanf ("%s", e[i].nome);
        fflush(stdin);
        printf ("Curso: ");   
        scanf ("%s", e[i].curso);
        printf ("Nota 1: ");
        scanf ("%f", &e[i].nota1);   
        printf ("Nota 2: ");   
        scanf ("%f", &e[i].nota2);
        e[i].media = (e[i].nota1 + e[i].nota2)/2;  
    }
}