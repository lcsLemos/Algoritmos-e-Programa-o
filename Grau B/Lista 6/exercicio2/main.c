#include <stdio.h>
#define LINHAS 3
#define COLUNAS 5

int main() {
    int v1[COLUNAS] = {1, 5, 9, 2, 5};
    int v2[COLUNAS] = {7, 4, 13, 21, 6};
    int v3[COLUNAS] = {8, -3, 5, 7, 12};
    int matriz[LINHAS][COLUNAS];
    int i, j;

    for (j = 0; j < COLUNAS; j++) {
        matriz[0][j] = v1[j];
        matriz[1][j] = v2[j];
        matriz[2][j] = v3[j];
    }

    printf("Matriz:\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}