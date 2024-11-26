#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LINHAS 4
#define COLUNAS 6

int main() {
    int matriz[LINHAS][COLUNAS];
    int i, j;
    int maior, menor;

    srand(time(NULL));

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            matriz[i][j] = (rand() % 21) - 10;  // valores entre -10 e 10
        }
    }

    maior = matriz[0][0];
    menor = matriz[0][0];

    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
            }
        }
    }

    printf("Maior valor da matriz: %d\n", maior);
    printf("Menor valor da matriz: %d\n", menor);

    return 0;
}