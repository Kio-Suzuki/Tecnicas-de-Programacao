#include <stdio.h>

void imprimirMatriz(int x[5][3]);
void dobraValor(int x[5][3]);
void triplicaValorPar(int x[5][3]);

int main()
{
    int x[5][3], opt;
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            printf ("Digite o valor: ");
            scanf ("%d", &x[i][j]);
        }
    }
    printf ("1 - Imprimir conteudo da matriz\n");
    printf ("2 - Dobrar o valores da matriz\n");
    printf ("3 - Triplicar os valores pares da matriz\n");
    scanf ("%d", &opt);
    switch (opt)
    {
        case 1:
            imprimirMatriz(x);
            break;
        case 2:
            dobraValor(x);
            break;
        case 3:
            triplicaValorPar(x);
    }
    return 0;
}

void imprimirMatriz(int x[5][3])
{
    int l, c;
    printf ("Linha: ");
    scanf ("%d", &l);
    printf ("Coluna: ");
    scanf ("%d", &c);
    printf ("x[%d][%d] = %d", l, c, x[l][c]);
}

void dobraValor(int x[5][3])
{
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            x[i][j] = x[i][j] * 2;
            printf ("%d ", x[i][j]);
        }
        printf ("\n");
    }    
}

void triplicaValorPar(int x[5][3])
{
    for (int i = 0; i < 5; i++){
        for(int j = 0; j < 3; j++){
            if (x[i][j] % 2 == 0){
                x[i][j] = x[i][j] * 3;        
            }
            printf ("%d ", x[i][j]);    
        }
        printf ("\n");
    }    
}