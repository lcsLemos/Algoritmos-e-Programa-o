#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INGREDIENTES 8
#define MAX_POCOES 5

typedef struct {
    char nome[30]; // Nome do ingrediente
    int quantidade; // Quantidade atual do ingrediente em estoque
} Ingrediente;

typedef struct {
    char nome[30]; // Nome da poção
    int ingredientes[7]; // Índices dos ingredientes necessários
    int quantidades[7]; // Quantidades de cada ingrediente necessário
} Pocao;

// Funções do menu
void consultarIngredientes(Ingrediente ingredientes[], int totalIngredientes);
void prepararPocao(Ingrediente ingredientes[], Pocao pocao[], int totalIngredientes, int totalPocoes);
void reabastecerIngrediente(Ingrediente ingredientes[], int totalIngredientes);

int main() {
    Ingrediente ingredientes[MAX_INGREDIENTES] = {
        {"Pó de Fênix", 100},
        {"Essência Celestial", 50},
        {"Raiz de Dragão", 45},
        {"Orvalho Lunar", 30},
        {"Flores secas", 200},
        {"Elixir amargo", 20},
        {"Lágrimas de unicórnio", 15}
    };

    Pocao pocao[MAX_POCOES] = {
        {"Poção de Cura", {0, 1, 4, 6}, {30, 20, 20, 10}},
        {"Poção Força da Floresta", {3, 2, 4}, {20, 30, 30}},
        {"Poção Sabedoria da Riqueza", {1, 0}, {30, 50}},
        {"Poção Sorte no Amor", {3, 4, 6}, {10, 50, 5}},
        {"Poção Malvada", {5, 2}, {10, 15}}
    };

    int opcao;
    int totalIngredientes = 7;
    int totalPocoes = 5;

    do {
        printf("\nMenu:\n");
        printf("1. Consultar Ingredientes Disponíveis\n");
        printf("2. Preparar Poção\n");
        printf("3. Reabastecer Ingrediente\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                consultarIngredientes(ingredientes, totalIngredientes);
                break;
            case 2:
                prepararPocao(ingredientes, pocao, totalIngredientes, totalPocoes);
                break;
            case 3:
                reabastecerIngrediente(ingredientes, totalIngredientes);
                break;
            case 4:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }
    } while (opcao != 4);

    return 0;
}

void consultarIngredientes(Ingrediente ingredientes[], int totalIngredientes) {
    printf("\nIngredientes Disponíveis:\n");
    for (int i = 0; i < totalIngredientes; i++) {
        printf("%d. %s: %d %s\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade,
               (i == 1 || i == 3 || i == 6) ? "ml" : "g");
    }
}

void prepararPocao(Ingrediente ingredientes[], Pocao pocao[], int totalIngredientes, int totalPocoes) {
    int escolha;
    int ingredientesFaltando = 0;

    printf("\nEscolha a poção que deseja preparar:\n");
    for (int i = 0; i < totalPocoes; i++) {
        printf("%d. %s\n", i + 1, pocao[i].nome);
    }
    printf("Escolha uma poção: ");
    scanf("%d", &escolha);
    escolha--;

    int faltando[7] = {0};

    for (int i = 0; i < 7 && pocao[escolha].ingredientes[i] != -1; i++) {
        int ingredienteIndex = pocao[escolha].ingredientes[i];
        int quantidadeNecessaria = pocao[escolha].quantidades[i];
        if (ingredientes[ingredienteIndex].quantidade < quantidadeNecessaria) {
            faltando[ingredienteIndex] = quantidadeNecessaria - ingredientes[ingredienteIndex].quantidade;
            ingredientesFaltando++;
        }
    }

    if (ingredientesFaltando == 0) {
        for (int i = 0; i < 7 && pocao[escolha].ingredientes[i] != -1; i++) {
            int ingredienteIndex = pocao[escolha].ingredientes[i];
            int quantidadeNecessaria = pocao[escolha].quantidades[i];
            ingredientes[ingredienteIndex].quantidade -= quantidadeNecessaria;
        }
        printf("Poção criada com sucesso!\n");
    } else {
        printf("Não foi possível preparar a poção. Ingredientes em falta:\n");
        for (int i = 0; i < 7; i++) {
            if (faltando[i] > 0) {
                printf("%d. %s: necessário %d %s, disponível %d %s\n", i + 1, ingredientes[i].nome, faltando[i],
                       (i == 1 || i == 3 || i == 6) ? "ml" : "g", ingredientes[i].quantidade,
                       (i == 1 || i == 3 || i == 6) ? "ml" : "g");
            }
        }
    }
}

void reabastecerIngrediente(Ingrediente ingredientes[], int totalIngredientes) {
    int escolha, quantidade;
    printf("\nEscolha o ingrediente para reabastecer:\n");
    for (int i = 0; i < totalIngredientes; i++) {
        printf("%d. %s: %d %s\n", i + 1, ingredientes[i].nome, ingredientes[i].quantidade,
               (i == 1 || i == 3 || i == 6) ? "ml" : "g");
    }
    printf("Escolha o ingrediente (1 a %d): ", totalIngredientes);
    scanf("%d", &escolha);
    escolha--;

    printf("Quantos serão adicionados ao ingrediente %s? ", ingredientes[escolha].nome);
    scanf("%d", &quantidade);

    ingredientes[escolha].quantidade += quantidade;
    printf("Ingrediente reabastecido com sucesso!\n");
}
