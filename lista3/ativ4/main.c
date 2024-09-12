// Crie um programa que verifica se um número inteiro informado pelo usuário é divisível por 3

int main()
{

    int n1, c1;

    printf("Digite seu número: ");
    scanf("%d", n1);

    if (c1 == 0)
    {
        c1 = n1 % 3;
        printf("Seu número não é divisível por 3");
    }
    else
    {
        c1 = n1 % 3;
        printf("Seu número é divisível por 3");
    }

    return 0;
}