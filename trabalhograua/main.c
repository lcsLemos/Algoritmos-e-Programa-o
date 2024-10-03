#include <stdio.h>
#include <stlib.h>
#include <time.h>

int main()
{

    int menu, numbacterias, ciclos, sorteio;
    int probA = 20, probB = 35, probC = 45, probD = 50, probE = 60, probF = 100;
    float txcrescimento, novapop;

    printf("1 - Nova Simulação\n2 - Sair do Programa\n\nEscolha uma opção: ");
    scanf("%d", &menu);

    srand(time(NULL));

    if (menu == 1)
    {
        printf("Qual seu número de bactérias?");
        scanf("%d", &numbacterias);
        printf("Qual a taxa de crescimento anual?");
        scanf("%f", &txcrescimento);
        printf("Qual o número de ciclos?");
        scanf("%d", &ciclos);

        for (int cont = 0; cont < ciclos; cont++)
        {
            novapop = numbacterias + (numbacterias * (txcrescimento / 100));
            printf("\nSeu %d° foi %f", cont + 1, novapop);
            sorteio = rand() % 100;
            if (sorteio <= 20)
            {
                printf(" Alta temperatura");
                novapop * 0.7;
            }
            else if (35 >= sorteio)
            {
                printf(" Falta de nutrientes");
                novapop * 0.75;
            }
            else if (45 >= sorteio)
            {
                printf(" Excesso de umidade");
                novapop * 0.8;
            }
            else if (50 >= sorteio)
            {
                printf(" Radiação Ultravioleta");
                novapop * 0.5;
            }
            else if (60 >= sorteio)
            {
                printf(" condição favorável");
                novapop * 1.2;
            }
            else
                (100 >= sorteio);
            {
                return novapop;
            }

            printf("\nSeu %d° foi %f", cont + 1, novapop);
        }
    }

    return 0;
}