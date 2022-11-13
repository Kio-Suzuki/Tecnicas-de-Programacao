#include <stdio.h>
 
int main() {
    int n, ce, ci, vi, de, c, d, u;
    scanf ("%d", &n);
    ce = n/100;
    ci = (n%100)/50;
    vi = ((n%100)%50)/20;
    de = (((n%100)%50)%20)/10;
    c = ((((n%100)%50)%20)%10)/5;
    d = (((((n%100)%50)%20)%10)%5)/2;
    u = ((((((n%100)%50)%20)%10)%5)%2);
    printf ("%d\n", n);
    printf ("%d nota(s) de R$ 100,00\n", ce);
    printf ("%d nota(s) de R$ 50,00\n", ci);
    printf ("%d nota(s) de R$ 20,00\n", vi);
    printf ("%d nota(s) de R$ 10,00\n", de);
    printf ("%d nota(s) de R$ 5,00\n", c);
    printf ("%d nota(s) de R$ 2,00\n", d);
    printf ("%d nota(s) de R$ 1,00\n", u);
    return 0;
}