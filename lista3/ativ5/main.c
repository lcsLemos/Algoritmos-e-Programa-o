// Faça um algoritmo para receber um número qualquer do usuário e informar na tela se é par ou se
// é ímpar.

int main()
{

    int n1, c1;

    printf("Digite seu número e direi se ele é par ou impar: ");
    scanf("%d", n1);

    if (c1 == 0)
    {

        printf("Seu número é impar.");
    }
    else
    {
        c1 = n1 % 2;
        printf("Seu número é par.");
    }

    return 0;
}