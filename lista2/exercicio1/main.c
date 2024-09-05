/*
 * Programa: batman.c
 * Descrição: pergunta sobre a identidade do batman
 * Autor: Lucas Lemos
 * Data de criação: 04/09/2024
 * Última modificação: 04/09/2024
 *
 * Observações:
 * - [Qualquer detalhe adicional ou dica importante.]
 */
#include <stdio.h>

int main()
{

    int minutos, segundos;
    printf("Digite o seu tempo em minutos: ");
    scanf("%d", &minutos);

    segundos = minutos * 60;

    printf("Seu tempo em segundos é: %d", segundos);

    return 0;
}