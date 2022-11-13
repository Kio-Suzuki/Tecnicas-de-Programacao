#include <stdio.h>
 
int main() {
    int n, s, m, h;
    scanf ("%d", &n);
    s = n % 60;
    m = (n / 60)%60;
    h = (n / 60)/60;
    printf ("%d:%d:%d\n", h, m, s);
    return 0;
}