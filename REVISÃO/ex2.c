#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;
    char nome[5]="Maria";
    char nome_lido[5];
    fp=fopen("nome.dat","wb");
    if(fp){
        printf("Arquivo criado\n");
        fwrite(nome, sizeof(char), 5, fp);
        fclose(fp);
    }else{
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }
    fp=fopen("nome.dat","rb");
    if(fp){
        printf("Arquivo aberto!\n");
        fread(nome_lido, sizeof(char), 5, fp);
        fclose(fp);
    }
    else{
        printf("Não foi possível abrir o arquivo\n");
        exit(1);
    }
    printf("Texto lido = %s\n", nome_lido);
}