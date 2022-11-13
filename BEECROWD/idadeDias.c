#include <stdio.h>

int main(){
    int x, a, m, d;
    scanf ("%d", &x);
    a = x / 365;
    m = (x % 365)/30;
    d = (x%365)%30;
    printf ("%d ano(s)\n", a);
    printf ("%d mes(es)\n", m);
    printf ("%d dia(s)\n", d);
    return 0;
}