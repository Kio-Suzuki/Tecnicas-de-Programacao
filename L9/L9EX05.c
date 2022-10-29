#include <stdio.h>

int main()
{
    int *pti;
    int i = 10;
    pti = &i;
    printf ("i = %d\n", i);
    printf ("pti = %d\n", pti);
    printf ("*pti = %d\n", *pti);
}