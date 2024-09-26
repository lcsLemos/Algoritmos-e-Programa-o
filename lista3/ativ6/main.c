// Brincadeira do PAR ou ÍMPAR. Pergunte para o usuário se ele aposta em PAR ou ÍMPAR. Depois
// disso, peça para ele digitar um número de 0 a 5 (como se fosse mostrar os dedos da mão. Sorteie
// um número de 0 a 5 e some com o que o usuário digitou. Se o usuário escolheu PAR e o valor da
// soma for par OU se ele escolheu ÍMPAR e o valor da soma é ímpar, diga que ele venceu. Senão, diga
// que o programa venceu �
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    int nmrusuario, somanmrusuario, nmrrandom, parimpar;

    printf("[1] para número par\n[2] para número impar\n\nVocê quer apostar em: ");
    scanf("%d", &parimpar);
    printf("digite um número de 1 a 5: ");
    scanf("%d", &nmrusuario);

    srand(time(NULL));

    nmrrandom = rand() % 6;
    somanmrusuario = (nmrrandom + nmrrandom);

    if (parimpar == 1 && somanmrusuario % 2 == 0 || parimpar == 2 && somanmrusuario % 2 != 0)
    {
        printf("Você venceu!!!!!!!");
    }
    else
    {
        printf("Eu, máquina ganhei");
    }

    return 0;
}