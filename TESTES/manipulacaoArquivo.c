#include <stdio.h>

typedef struct {
char nome[30];
int idade;
} Aluno;

void gravarArquivo();
void lerArquivo();

int main()
{
    int opt;
    do{
        printf ("1 - gravar arquivo\n");
        printf ("2 - ler arquivo\n");
        printf ("3 - sair\n");
        scanf ("%d", &opt);
        switch (opt)
        {
        case 1:
            gravarArquivo();
            break;

        case 2:
            lerArquivo();
            break;
        
        default:
            break;
        }
    }while(opt == 1 || opt == 2);
}
        
void gravarArquivo() 
{
    Aluno aluno;
    FILE *fp;
    char nome[50];
    char filename[50];
    printf("Digite o nome: ");
    scanf("%s", &nome);
    sprintf(filename, "Voluntario %s.txt", nome);
    fp = fopen(filename,"w");
    if (fp) {
        printf("Informe o nome do aluno: ");
        fflush(stdin);
        fgets(aluno.nome, 30, stdin);
        printf("Informe a idade do aluno: ");
        scanf("%d", &aluno.idade);
        fprintf(fp, "%s%d", aluno.nome, aluno.idade);
        fclose(fp);
    } else{
        printf("Falha ao abrir o arquivo.");
    }
}

void lerArquivo() 
{
    Aluno aluno;
    FILE *fp;
    char nome[50];
    char filename[50];
    printf("Digite o nome: ");
    scanf("%s", &nome);
    sprintf(filename, "Voluntario %s.txt", nome);
    fp = fopen(filename,"r");
    if(fp){
        fscanf(fp, "%s\n%d", aluno.nome, &aluno.idade);
        printf("Nome lido: %s", aluno.nome);
        printf("\nIdade lida: %d\n", aluno.idade);
        fclose(fp);
    } else{
        printf("Falha ao abrir o arquivo.");
    }
}