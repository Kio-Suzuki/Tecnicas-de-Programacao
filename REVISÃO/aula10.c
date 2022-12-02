#include <stdio.h>

int main(void) 
{
    enum ds {dom, seg, ter, qua, qui, sex, sab};
    enum ds hoje = qua;
    printf("%d\n", hoje);
    return 0;
}