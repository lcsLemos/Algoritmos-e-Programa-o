#include <stdio.h>

#define TAM 4

int main() {
    int matriz[TAM][TAM];
    int i, j;

    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            if (i == j) {
                matriz[i][j] = 1;
            } else {
                matriz[i][j] = 0;
            }
        }
    }

    printf("Matriz Identidade 4x4:\n");
    for (i = 0; i < TAM; i++) {
        for (j = 0; j < TAM; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
