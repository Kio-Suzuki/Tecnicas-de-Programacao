#include <stdio.h>
#include <string.h>

int main()
{
    char login[20], senha[10];
    char nome[] = "maria";
    char pw[] = "abcd1234";
    int vl, vs;
    printf ("Login: ");
    scanf ("%s", login);
    printf ("Senha: ");
    scanf ("%s", senha);
    vl = strcmp (login, nome);
    vs = strcmp (senha, pw);
    if (vl == 0 && vs == 0){
        printf ("Login realizado com sucesso");
    }else{
        printf ("Acesso negado");
    }
    return 0;
}