#include <stdio.h>
 
int main() {
    int X, Y;
    float T;
    scanf ("%d %d", &X, &Y);
    T = X*Y/12.0;
    printf ("%.3f\n", T);
    return 0;
}