#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#include <io.h>
#include <conio.h>
#include <process.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct codigoPessoa{
    int codP;
}cod_p;

typedef struct codigoEstabelecimento{
    int codE;
}cod_e;

typedef struct telefone{
    int ddd;
    int fixo;
    int celular;
}tel;

typedef struct endereco{
    char logradouro[50];
    int numero;
    int cep;
    char cidade[50];
    char estado[10]; 
}end;

typedef struct dadosVoluntario{
    cod_p codigo;
    char nome[50];
    char sobrenome[50];
    char cpf[20];
    char genero;
    data data;
    end endereco;
    tel telefone;
}vol;

typedef struct cdadosPessoaisFisica{
    char nome[50];
    char genero;
    char cpf[20];
    int priori;
    int idade;
    data nascimento;
    end endereco;
    tel telefone;
}pfisica;

typedef struct doacao{
    int quantidade;
    char info[100];
    data data;
}doa;

typedef struct dadosRestaurantes{
    cod_e codigo;
    char nome[50];
    char cnpj[30];
    end endereco;
    tel telefone;
    doa doacao;
}rest;

void apresentarMenu();
pfisica cadastrarPessoa(void);
vol cadastrarVoluntario(void);
rest cadastrarRestaurante(void);
pfisica apresentarPessoa(void);
vol apresentarVoluntario(void);
rest apresentarRestaurante(void);


int main()
{
    pfisica p1;
    rest r1;
    vol v1;
    apresentarMenu(p1, r1, v1);
    return 0;
}

void apresentarMenu(pfisica p1, rest r1, vol v1)
{
    int opt;
    printf ("\nMENU\n");
    printf ("1 - Administrador\n");
    printf ("2 - Visitante\n");
    printf ("3 - Sair\n");
    printf ("Opcao: ");
    scanf ("%d", &opt);
    switch (opt)
    {
    case 1:
        do{
            printf ("\n1 - Cadastrar pessoa\n");
            printf ("2 - Cadastrar voluntario\n");
            printf ("3 - Cadastrar Restaurante\n");
            printf ("4 - Pesquisar Pessoa\n");
            printf ("5 - Pesquisar Voluntario\n");
            printf ("6 - Pesquisar Restaurante\n");
            printf ("0 - Sair\n");
            printf ("Opcao: ");
            scanf ("%d", &opt);
            switch (opt)
            {
            case 1:
                p1 = cadastrarPessoa();
                break;

            case 2:
                v1 = cadastrarVoluntario();
                break;

            case 3:
                r1 = cadastrarRestaurante();
                break;

            case 4:
                p1 = apresentarPessoa();
                break;

            case 5:
                v1 = apresentarVoluntario();
                break;

            case 6:
                r1 = apresentarRestaurante();
                break;
            
            case 0:
                printf ("Ate mais!");
                break;

            default:
                printf ("Escolha outra opcao");
                break;
            }
        }while(opt >= 1 && opt <= 6);
            break;
    
    case 2:
        printf ("\nPESQUISAR RESTAURANTE\n");
        printf ("1 - Nome");
        printf ("2 - Local");
        printf ("Opcao: ");
        scanf ("%d", &opt);
    
    default:
        printf ("Escolha outra opcao");
        break;
    }
}

pfisica cadastrarPessoa(void) 
{
    pfisica p;
    FILE *fp;
    char nome[50];
    char filename[50];
    printf("Digite o nome do arquivo: ");
    scanf("%s", &nome);
    sprintf(filename, "Pessoa %s.txt", nome);
    fp = fopen(filename,"w");
    printf ("\nNome completo: ");
    fflush(stdin);
    fgets (p.nome, 50, stdin);
    printf ("CPF: ");
    fflush(stdin);
    fgets (p.cpf, 20, stdin);
    printf ("Genero: ");
    scanf (" %c", &p.genero);
    printf ("Nascimento\n");
    printf ("Dia: ");
    scanf ("%d", &p.nascimento.dia);
    printf ("Mes: ");
    scanf ("%d", &p.nascimento.mes);
    printf ("Ano: ");
    scanf ("%d", &p.nascimento.ano);
    printf ("Endereco (caso n??o tenha digite 0 nas perguntas seguintes)\n");
    printf ("Rua: ");
    fflush(stdin);
    fgets (p.endereco.logradouro, 50, stdin);
    printf ("Numero: ");
    scanf ("%d", &p.endereco.numero);
    printf ("CEP: ");
    scanf ("%d", &p.endereco.cep);
    printf ("Cidade: ");
    fflush(stdin);
    fgets (p.endereco.cidade, 50, stdin);
    printf ("Estado (2 letras): ");
    fflush(stdin);
    fgets (p.endereco.estado, 10, stdin);
    printf ("Telefone (caso n??o tenha digite 0 nas op????es seguintes)\n");
    printf ("DDD: ");
    scanf ("%d", &p.telefone.ddd);
    printf ("Telefone fixo: ");
    scanf ("%d", &p.telefone.fixo);
    printf ("Celular: ");
    scanf ("%d", &p.telefone.celular);
    printf ("Cadastro realizado com sucesso!\n");
    fprintf(fp, "Nome: %sG??nero: %c\nCPF: %sData de nascimento %d/%d/%d\nLogradouro: %sN??mero:%d\nCEP: %d\nCidade: %sEstado: %sTelefone (%d) %d\nCelular (%d) %d", p.nome, p.genero, p.cpf,  p.nascimento.dia, p.nascimento.mes, p.nascimento.ano, p.endereco.logradouro, p.endereco.numero, p.endereco.cep, p.endereco.cidade, p.endereco.estado, p.telefone.ddd, p.telefone.fixo, p.telefone.ddd, p.telefone.celular);
    fclose(fp);
    return p;
}

rest cadastrarRestaurante(void)
{
    rest r;
    FILE *fp;
    char nome[50];
    char filename[50];
    printf("\0 Digite o nome do arquivo: ");
    scanf("%s", &nome);
    sprintf(filename, "Restaurante %s.txt", nome);
    printf("%s", filename);
    fp = fopen(filename, "w");
    printf ("\nNome: ");
    fflush(stdin);
    fgets (r.nome, 50, stdin);
    printf ("CNPJ: ");
    fflush(stdin);
    fgets (r.cnpj, 30, stdin);
    printf ("Endereco\n");
    printf ("Rua: ");
    fflush(stdin);
    fgets (r.endereco.logradouro, 50, stdin);
    printf ("Numero: ");
    scanf ("%d", &r.endereco.numero);
    printf ("CEP: ");
    scanf ("%d", &r.endereco.cep);
    printf ("Cidade: ");
    fflush(stdin);
    fgets (r.endereco.cidade, 50, stdin);
    printf ("Estado (2 letras): ");
    fflush(stdin);
    fgets (r.endereco.estado, 10, stdin);
    printf ("Telefone\n");
    printf ("DDD: ");
    scanf ("%d", &r.telefone.ddd);
    printf ("Telefone fixo: ");
    scanf ("%d", &r.telefone.fixo);
    printf ("Celular: ");
    scanf ("%d", &r.telefone.celular);
    printf ("Cadastro realizado com sucesso!\n");
    fprintf(fp, "Nome: %sCNPJ: %d\nLogradouro: %sNumero:%d\nCEP: %d\nCidade: %sEstado: %sTelefone (%d) %d\nCelular (%d) %d", r.nome, r.cnpj, r.endereco.logradouro, r.endereco.numero, r.endereco.cep, r.endereco.cidade, r.endereco.estado, r.telefone.ddd, r.telefone.fixo, r.telefone.ddd, r.telefone.celular);
    fclose(fp);
    return r;
}

vol cadastrarVoluntario(void) 
{
    vol v;
    FILE *fp;
    char nome[50];
    char filename[50];
    printf("Digite o nome: ");
    scanf("%s", &nome);
    sprintf(filename, "Voluntario %s.txt", nome);
    fp = fopen(filename,"w");
    printf ("\nNome completo: ");
    fflush(stdin);
    fgets (v.nome, 50, stdin);
    printf ("CPF: ");
    fflush(stdin);
    fgets (v.cpf, 20, stdin);
    printf ("Genero: ");
    scanf ("%c", &v.genero);
    printf ("Nascimento\n");
    printf ("Dia: ");
    scanf ("%d", &v.data.dia);
    printf ("Mes: ");
    scanf ("%d", &v.data.mes);
    printf ("Ano: ");
    scanf ("%d", &v.data.ano);
    printf ("Endereco\n");
    printf ("Rua: ");
    fflush(stdin);
    fgets (v.endereco.logradouro, 50, stdin);
    printf ("Numero: ");
    scanf ("%d", &v.endereco.numero);
    printf ("CEP: ");
    scanf ("%d", &v.endereco.cep);
    printf ("Cidade: ");
    fflush(stdin);
    fgets (v.endereco.cidade, 50, stdin);
    printf ("Estado (2 letras): ");
    fflush(stdin);
    fgets (v.endereco.estado, 10, stdin);
    printf ("Telefone\n");
    printf ("DDD: ");
    scanf ("%d", &v.telefone.ddd);
    printf ("Telefone fixo: ");
    scanf ("%d", &v.telefone.fixo);
    printf ("Celular: ");
    scanf ("%d", &v.telefone.celular);
    printf ("Cadastro realizado com sucesso!\n");
    fprintf(fp, "Nome: %sG??nero: %c\nCPF: %d\nData de nascimento %d/%d/%d\nLogradouro: %sN??mero:%d\nCEP: %d\nCidade: %sEstado: %sTelefone (%d) %d\nCelular (%d) %d", v.nome, v.genero, v.cpf,  v.data.dia, v.data.mes, v.data.ano, v.endereco.logradouro, v.endereco.numero, v.endereco.cep, v.endereco.cidade, v.endereco.estado, v.telefone.ddd, v.telefone.fixo, v.telefone.ddd, v.telefone.celular);
    fclose(fp);
    return v;
}

pfisica apresentarPessoa(void)
{
    pfisica p;
    FILE *fp;
    char nome[50];
    char filename[50];
    char linha[200];
    printf("Digite o nome: ");
    scanf("%s", nome);
    sprintf(filename, "Pessoa %s.txt", nome);
    fp = fopen(filename,"r");
    if (fp){
        while(!feof(fp)){
            fgets(linha, 200, fp);
            puts(linha);
        }
    }else{
        printf ("Falha ao abrir o arquivo");
    }
    fclose(fp);
}

vol apresentarVoluntario(void)
{
    vol r;
    FILE *fp;
    char nome[50];
    char filename[50];
    char linha[200];
    printf("Digite o nome: ");
    scanf("%s", nome);
    sprintf(filename, "Voluntario %s.txt", nome);
    fp = fopen(filename,"r");
    if (fp){
        while(!feof(fp)){
            fgets(linha, 200, fp);
            puts(linha);
        }
    }else{
        printf ("Falha ao abrir o arquivo");
    }
    fclose(fp);
}

rest apresentarRestaurante(void)
{
    rest r;
    FILE *fp;
    char nome[50];
    char filename[50];
    char linha[200];
    printf("Digite o nome: ");
    scanf("%s", nome);
    sprintf(filename, "Pessoa %s.txt", nome);
    fp = fopen(filename,"r");
    if (fp){
        while(!feof(fp)){
            fgets(linha, 200, fp);
            puts(linha);
        }
    }else{
        printf ("Falha ao abrir o arquivo");
    }
    fclose(fp);
}