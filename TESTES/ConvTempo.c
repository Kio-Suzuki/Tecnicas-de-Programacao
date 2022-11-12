#include <stdio.h>
 
int main() {
    int N, m, h, s;
    scanf ("%d", &N);
    if (N % 6 == 0){
        m=N/60;
    }else{

    }
    if (m > 60){
        h=m/60;
    }else{
        h=0;
    }
    h=m/60;
    printf ("N / 6 = %d\n", N%6);
    printf ("%d:%d:%d/n", h, m, s);
    return 0;
}