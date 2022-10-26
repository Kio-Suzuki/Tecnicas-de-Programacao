#include <stdio.h>

int main()
{
    int n, n1, n2;
    //for (int i = 0; i < 3; i++){
        printf("Digite o valor da nota: ");
        scanf ("%d", &n); 
        printf("Digite o valor da nota: ");
        scanf ("%d", &n1); 
        printf("Digite o valor da nota: ");
        scanf ("%d", &n2);          
    //}
    int *x = &n;
    int *y = &n1;
    int *z = &n2;
    int **med; 
    med = &x;
    printf ("%d\n", *x);
    printf ("%d\n", *y);
    printf ("%d\n", *z);
    printf ("%d\n", **med);

    if ((**med/3) >= 6){
        printf ("Aprovado!");
    }else{
        printf ("Reprovado");
    }
    return 0;
}   