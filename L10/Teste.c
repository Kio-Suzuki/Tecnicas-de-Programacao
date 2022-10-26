int main() {
    int x = 10;
    int *p1 = &x;
    int **p2;
    p2 = &p1;
    printf("%d\n", x);
    printf("%d\n", *p1);
    printf("%d\n", **p2/2);
    return 0;
}