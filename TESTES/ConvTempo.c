#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100],str2[100];
    printf("Entre com uma primeira string: ");
    gets(str1);
    printf("Entre com uma segunda string: ");
    gets(str2);
    strcat(str1, str2);
    printf("Primeira string concatenada = %s",str1);
    return(0);
}
