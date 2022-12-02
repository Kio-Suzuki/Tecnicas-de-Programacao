#include <stdio.h>

int main()
{
    int x = 10;
    int y = x;
    int *ptr = &x;
    printf ("x = %d\n", x);
    printf ("&x = %d\n", &x);
    printf ("y = %d\n", y);
    printf ("&y = %d\n", &y);
    printf ("ptr = %d\n", ptr);
    printf ("&ptr = %d\n", &ptr);
    printf ("*ptr = %d\n", *ptr);
    return 0;
}