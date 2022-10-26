void calculaFatoria();

int main()
{
    int n;
    printf ("Digite um valor: ");
    scanf ("%d", &n);
    calculaFatorial(n);
    printf ("O fatorial de %d = %d", n, calculaFatorial(n));
}

int calculaFatorial(int n)
{
    int i, r = 1;
    for (i = n; i > 0; i--){
        r = r * i;
    }
    return r;
}