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

int main()
{

    int dolar, preco;

    printf("Diga quantos dolares você quer comprar: ");
    scanf("%d", &dolar);

    preco = dolar * 5.64;

    printf("Você quer comprar U$ %d dolares, isso custará %d reais", dolar, preco);
}