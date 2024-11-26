#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DIAS 30

int main() {
    int consumo[DIAS], total = 0, maior, menor, diaMaior, diaMenor;
    float media;
    int i;

    srand(time(NULL));
    for (i = 0; i < DIAS; i++) {
        consumo[i] = 100 + rand() % 401;
        total += consumo[i];
        if (i == 0 || consumo[i] > maior) {
            maior = consumo[i];
            diaMaior = i + 1;
        }
        if (i == 0 || consumo[i] < menor) {
            menor = consumo[i];
            diaMenor = i + 1;
        }
    }

    media = (float)total / DIAS;

    printf("Consumo total no mês: %d litros\n", total);
    printf("Média de consumo diário: %.2f litros\n", media);
    printf("Maior consumo: %d litros no dia %d\n", maior, diaMaior);
    printf("Menor consumo: %d litros no dia %d\n", menor, diaMenor);

    return 0;
}