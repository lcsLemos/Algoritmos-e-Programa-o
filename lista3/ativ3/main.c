void main() {

    int n1, x2, x3;

    printf("Qual seu número? ");
    scanf("%d", &n1);

    if (n1 % 2)
    {
        x3 = n1*3;
        printf("Sua resposta é: %d", x3);
    } else {
        x2 = n1*2;
        printf("Sua resposta é: %d", x2);
    }

    return 0;
}