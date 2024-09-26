// Implementar um programa que calcula o desconto previdenciário de um funcionário. O programa
// deve, dado um salário retornar o valor do desconto proporcional ao mesmo. O cálculo de desconto
// segue a regra: o desconto deve 11% do valor do salário. Entretanto, o valor máximo de desconto é
// 318,20. Sendo assim, ou o método retorna 11% sobre o salário ou 318,20
#include <stdio.h>

int main()
{

    float salario, valordesconto, salariodescontado;

    printf("Qual ser salário? ");
    scanf("%f", &salario);

    valordesconto = salario * 0.11;
   

    if (valordesconto < 318.20)
    {
        salariodescontado = salario * 0.89;
        printf("Seu salário com o desconto previdenciário é: %f", salariodescontado);
    } else {
        salariodescontado = salario - 318.20;
        printf("Seu salário com o desconto previdenciário é: %f", salariodescontado);
    }

    return 0;
}
