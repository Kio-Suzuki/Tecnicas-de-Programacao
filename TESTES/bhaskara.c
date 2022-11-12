#include <stdio.h>
#include <math.h>
 
int main() {
    double A, B, C, D;
    scanf ("%lf %lf %lf", &A, &B, &C);
    D=(pow(B,2)-(4*A*C));
    printf ("DELTA = %lf\n", (pow(B,2)-(4*A*C)));
    
    if (D > 0){
        printf ("R1 = %.5lf\n", ((-(B))+(sqrt(pow(B,2)-(4*A*C))))/2*A);
        printf ("R2 = %.5lf\n", ((-(B))-(sqrt(pow(B,2)-(4*A*C))))/2*A);
    }else{
        printf ("Impossivel calcular");
    }
    return 0;
}