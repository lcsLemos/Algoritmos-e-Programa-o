#include <stdio.h>
#define TAM 5

int main() {
    int v[TAM], resultado[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &v[i]);
    }

    for (i = 0; i < TAM; i++) {
        resultado[i] = v[i] * i;
    }

    printf("Resultado: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", resultado[i]);
    }
    printf("\n");

    return 0;
}