#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FACES 6

int main() {
    int n, i, face;
    int resultados[FACES] = {0};
    float percentual[FACES];

    printf("Digite o número de lançamentos: ");
    scanf("%d", &n);

    srand(time(NULL));
    for (i = 0; i < n; i++) {
        face = rand() % FACES;
        resultados[face]++;
    }

    printf("Percentual de cada face:\n");
    for (i = 0; i < FACES; i++) {
        percentual[i] = (float)resultados[i] / n * 100;
        printf("Face %d: %.2f%%\n", i + 1, percentual[i]);
    }

    return 0;
}