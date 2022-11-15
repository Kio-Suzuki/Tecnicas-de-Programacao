#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int v;
    srand(time(NULL));
    v = rand() % 100;
    printf ("v = %d", v);
    return 0;
}
