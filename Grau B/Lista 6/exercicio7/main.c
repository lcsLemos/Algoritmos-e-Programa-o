#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 5

int main() {
    int matriz[TAM][TAM];
    int i, j;

    srand(time(NULL));

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j] = (rand() % 21) - 10;
        }
    }

    printf("Matriz 1:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            matriz[i][j] = -matriz[i][j];
        }
    }

    printf("\nMatriz 2:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
