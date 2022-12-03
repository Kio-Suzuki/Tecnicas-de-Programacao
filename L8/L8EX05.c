#include <stdio.h>

void inc(int x)
{
    x = x + 1;
}   

int main(){
    int x = 40;
    inc(&x);
    printf("%d\n",x);   // 40
    return 0;
}