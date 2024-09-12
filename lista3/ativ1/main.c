#include <stdio.h>

int main()
{

    float numero1;
    float numero2;
    float calculo;

    printf("Para fazer a divisão informe o dividendo: ");
    scanf("%f", &numero1);

    printf("Informe o divisor: ");
    scanf("%f", &numero2);

    if (numero2 == 0)
    {
        printf("Essa divisão não é possivel.");
    }
    else
    {
        calculo = numero1 / numero2;
        printf("Essa é sua resposta: %f", calculo);
    }

    return 0;
}