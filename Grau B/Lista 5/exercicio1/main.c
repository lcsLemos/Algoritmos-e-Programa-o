#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

int main() {
    int v[TAM], vInverso[TAM], vPares[TAM], vImpares[TAM];
    int soma = 0, produto = 1, maior, menor, numPares = 0, numImpares = 0, ocorrencias50 = 0;
    float media;
    int i;

    srand(time(NULL));
    for (i = 0; i < TAM; i++) {
        v[i] = 10 + rand() % 81;
    }

    printf("Vetor: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");

    for (i = 0; i < TAM; i++) {
        if (v[i] == 50) {
            ocorrencias50++;
        }
        soma += v[i];
        produto *= v[i];
        if (i == 0 || v[i] > maior) {
            maior = v[i];
        }
        if (i == 0 || v[i] < menor) {
            menor = v[i];
        }
        vInverso[TAM - 1 - i] = v[i];
        if (v[i] % 2 == 0) {
            vPares[numPares++] = v[i];
        } else {
            vImpares[numImpares++] = v[i];
        }
    }

    printf("Valor 50 %s encontrado.\n", ocorrencias50 > 0 ? "foi" : "não foi");
    printf("Número de ocorrências do valor 50: %d\n", ocorrencias50);
    media = (float)soma / TAM;
    printf("Média dos valores: %.2f\n", media);
    printf("Maior valor: %d\n", maior);
    printf("Menor valor: %d\n", menor);
    printf("Soma dos valores: %d\n", soma);
    printf("Produto acumulado dos valores: %d\n", produto);
    printf("Vetor em ordem inversa: ");
    for (i = 0; i < TAM; i++) {
        printf("%d ", vInverso[i]);
    }
    printf("\n");
    printf("Vetor de pares: ");
    for (i = 0; i < numPares; i++) {
        printf("%d ", vPares[i]);
    }
    printf("\n");
    printf("Vetor de ímpares: ");
    for (i = 0; i < numImpares; i++) {
        printf("%d ", vImpares[i]);
    }
    printf("\n");

    return 0;
}