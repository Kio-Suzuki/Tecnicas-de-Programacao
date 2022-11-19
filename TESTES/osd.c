#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

typedef struct data{
    int dia;
    int mes;
    int ano;
}data;

typedef struct endereco{
    char rua[50];
    int numero;
    int cep;
    char cidade[50];
}end;

typedef struct cdadosPessoaisFisica{
    char nome[50];
    int idade;
    data nascimento;
    end endereco;
}pfisica;

pfisica cadastrarPessoa(void);
void apresentaMenu();

int main()
{
    pfisica p1;
    apresentaMenu();
    p1 = cadastrarPessoa();
    return 0;
}

void apresentaMenu()
{
    int opt;
    printf ("MENU\n");
    printf ("1 - Cadastrar\n");
    printf ("2 - Pesquisar\n");
    printf ("0 - Sair\n");
    printf ("Opcao: ");
    scanf ("%d", &opt);
    switch (opt)
    {
    case 1:
        cadastrarPessoa();
        break;

    default:
        printf ("Escolha outro valor\n");
        break;
    }
}

pfisica cadastrarPessoa(void)
{
    pfisica p;
    printf ("Nome: ");
    scanf ("%s", &p.nome);
    printf ("Idade: ");
    scanf ("%d", &p.idade);
    printf ("Dia do nascimento: ");
    scanf ("%d", &p.nascimento.dia);
    printf ("Mes do nascimento: ");
    scanf ("%d", &p.nascimento.mes);
    printf ("Ano do nascimento: ");
    scanf ("%d", &p.nascimento.ano);
    printf ("Rua: ");
    scanf ("%s", &p.endereco.rua);
    printf ("Numero: ");
    scanf ("%d", &p.endereco.numero);
    printf ("CEP: ");
    scanf ("%d", &p.endereco.cep);
    printf ("Cidade: ");
    scanf ("%s", &p.endereco.cidade);
    return p;
}
