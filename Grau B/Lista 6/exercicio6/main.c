#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ALUNOS 10
#define NOTAS 3

int main() {
    float matriz[ALUNOS][NOTAS];
    int i;
    
    srand(time(NULL));

    for (i = 0; i < ALUNOS; i++) {
        matriz[i][0] = (rand() % 101) / 10.0;
        matriz[i][1] = (rand() % 101) / 10.0;
        matriz[i][2] = (matriz[i][0] + matriz[i][1]) / 2.0;
    }

    printf("Grau A  Grau B  Grau Parcial\n");
    for (i = 0; i < ALUNOS; i++) {
        printf("%.1f    %.1f    %.1f\n", matriz[i][0], matriz[i][1], matriz[i][2]);
    }

    return 0;
}