#include <stdio.h>

typedef struct {
char nome[30];
int idade;
} Aluno;

int main() 
{
    Aluno aluno;
    FILE *fp;
    int k;

    for (k = 0; k < 100; k++) {
        char filename[100];
        FILE *fp;
        sprintf(filename, "Teste-%50s.txt", k); /* Teste-00.txt; Teste-01.txt; ...; Teste-99.txt */
        file = fopen(filename, "w");
        if (file != NULL) {
            fclose(file);
        } else {
            perror(filename);
            exit(EXIT_FAILURE);
        }
    }

    fp = fopen("teste.txt","w");
    if (fp) {
        printf("Informe o nome do aluno: ");
        fgets(aluno.nome, 30, stdin);
        printf("Informe a idade do aluno: ");
        scanf("%d", &aluno.idade);
        fprintf(fp, "%s%d", aluno.nome, aluno.idade);
        fclose(fp);
    } else{
        printf("Falha ao abrir o arquivo.");
    }
}



void tocopy(void) {
    int k;
    for (k = 0; k < 100; k++) {
        char filename[100];
        FILE *file;
        sprintf(filename, "Teste-%02d.txt", k); /* Teste-00.txt; Teste-01.txt; ...; Teste-99.txt */
        file = fopen(filename, "w");
        if (file != NULL) {
            fclose(file);
        } else {
            perror(filename);
            exit(EXIT_FAILURE);
        }
    }
}