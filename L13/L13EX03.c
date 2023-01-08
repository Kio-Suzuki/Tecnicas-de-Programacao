#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int id;
    float preco
}item;

int main()
{
    FILE *fp;
    int n;
    printf ("Quantidade de itens: ");
    scanf ("%d", &n);
    item i[n];
    item **ptrI = &i;
    fp = fopen("compras.dat","wb");
    for (int i = 0; i < n; i++){
        printf ("Id: ");
        scanf ("%d", ptrI->id);
        printf ("Preco: ");
        scanf ("%f", ptrI->preco);
    }
    fprintf (fp, "ID: %d\nPreco: %.2f", ptrI->id, ptrI->preco);
}