#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JOGADORES 4
#define RODADAS 5
#define MAX_PONTOS 100
#define DESTAQUE 80

int main() {
    int pontos[JOGADORES] = {0}, rodada[RODADAS], i, j, maior, vencedor, empate;

    srand(time(NULL));

    for (i = 0; i < RODADAS; i++) {
        printf("Rodada %d:\n", i + 1);
        for (j = 0; j < JOGADORES; j++) {
            rodada[j] = rand() % (MAX_PONTOS + 1);
            pontos[j] += rodada[j];
            printf("Jogador %d: %d pontos\n", j + 1, rodada[j]);
            if (rodada[j] > DESTAQUE) {
                printf("Rodada de Destaque para o Jogador %d\n", j + 1);
            }
        }
        printf("\n");
    }

    printf("Pontuação final:\n");
    maior = pontos[0];
    vencedor = 0;
    empate = 0;

    for (j = 0; j < JOGADORES; j++) {
        printf("Jogador %d: %d pontos\n", j + 1, pontos[j]);
        if (pontos[j] > maior) {
            maior = pontos[j];
            vencedor = j;
            empate = 0;
        } else if (pontos[j] == maior && j != vencedor) {
            empate = 1;
        }
    }

    if (empate) {
        printf("Houve empate entre os jogadores.\n");
    } else {
        printf("O vencedor é o Jogador %d com %d pontos.\n", vencedor + 1, maior);
    }

    return 0;
}