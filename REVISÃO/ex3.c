#include <stdio.h>
#include <stdlib.h>

typedef struct {
char nome[30];
int idade;
} Aluno;

int main() {
    Aluno aluno;
    FILE *fp;
    fp = fopen("teste.dat","wb");
    if(fp){
        printf("Informe o nome: ");
        gets(aluno.nome);
        printf("Informe a idade: ");
        scanf("%d", &aluno.idade);
        fwrite(&aluno, sizeof(aluno), 1, fp);
        fclose(fp);
    }else{
        printf("Falha ao abrir o arquivo.");
    }
    fp = fopen("teste.dat","rb");
    if(fp){
        fread(&aluno, sizeof(aluno), 1, fp);
        printf("Nome: %s", aluno.nome);
        printf("\nIdade: %d", aluno.idade);
        fclose(fp);
    } else{
        printf("Falha ao abrir o arquivo.");
    }
}