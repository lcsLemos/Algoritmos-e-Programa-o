#include <stdio.h>

int main()
{

    float valorproduto, valorvenda;

    printf("Qual o valor do seu produto: ");
    scanf("%f", &valorproduto);

    if (valorproduto <= 20)
    {
        valorvenda = valorproduto * 1.45;
        printf("Seu valor de venda será: %.2f", valorvenda);
    }
    else if (valorproduto <= 50)
    {
        valorvenda = valorproduto * 1.35;
        printf("Seu valor de venda será: %.2f", valorvenda);
    }
    else
    {
        valorvenda = valorproduto * 1.25;
        printf("Seu valor de venda será: %.2f", valorvenda);
    }

    return 0;
}