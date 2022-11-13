#include <stdio.h>
 
int main() {
    float n1, n2, n3, n4, m, ne, nf;
    scanf ("%f %f %f %f", &n1, &n2, &n3, &n4);
    m = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
    printf ("Media: %.1f\n", m);
    if (m >= 7.0){
        printf ("Aluno aprovado.\n");
    }else if(m >= 5.0){
        printf ("Aluno em exame.\n");
    }else{
        printf ("Aluno reprovado.\n");
    }
    scanf ("%f", &ne);
    printf ("Nota do exame: %.1f\n", ne);
    nf = (m + ne)/2;
    if (nf >= 5.0){
        printf ("Aluno aprovado.\n");
        printf ("Media final: %.1f\n", nf);
    }else{
        printf ("Aluno reprovado.\n");
        printf ("Media final: %.1f\n", nf);
    }
    return 0;
}