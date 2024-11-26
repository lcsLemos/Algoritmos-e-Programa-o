#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 6

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int somaSegundaLinha = 0, somaQuintaColuna = 0, somaMultiplicacao = 0;
    int somaColunasPares = 0, somaLinhasImpares = 0;

    srand(time(NULL));

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = (rand() % 21) - 10;  // valores entre -10 e 10
        }
    }

    for (j = 0; j < COLUNAS; j++) {
        somaSegundaLinha += matriz[1][j];  // soma dos elementos da segunda linha
    }

    for (i = 0; i < LINHAS; i++) {
        somaQuintaColuna += matriz[i][4];  // soma dos elementos da quinta coluna
    }

    for (j = 0; j < COLUNAS; j++) {
        somaMultiplicacao += matriz[0][j] * matriz[3][j];  // multiplicação da 1ª linha pela 4ª linha
    }

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j += 2) {
            somaColunasPares += matriz[i][j];  // soma das colunas com índices pares
        }
    }

    for (i = 1; i < LINHAS; i += 2) {
        for (j = 0; j < COLUNAS; j++) {
            somaLinhasImpares += matriz[i][j];  // soma das linhas com índices ímpares
        }
    }

    printf("Soma dos elementos da segunda linha: %d\n", somaSegundaLinha);
    printf("Soma dos elementos da quinta coluna: %d\n", somaQuintaColuna);
    printf("Soma da multiplicação dos elementos da 1ª linha pelos da 4ª linha: %d\n", somaMultiplicacao);
    printf("Soma dos elementos das colunas com índices pares: %d\n", somaColunasPares);
    printf("Soma dos elementos das linhas com índices ímpares: %d\n", somaLinhasImpares);

    return 0;
}