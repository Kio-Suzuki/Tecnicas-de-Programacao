#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C, D;
    scanf ("%lf %lf %lf", &A, &B, &C);
    D=(pow(B,2)-(4*A*C));
    if (sqrt(D) > 0 && A != 0){
        printf ("R1 = %.5lf\n", ((-B)+(sqrt(D)))/(2.0*A));
        printf ("R2 = %.5lf\n", ((-B)-(sqrt(D)))/(2*A));
    }else{
        printf ("Impossivel calcular\n");
    }
    return 0;
}