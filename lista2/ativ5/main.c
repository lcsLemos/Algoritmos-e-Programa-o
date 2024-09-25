// Um motorista deseja encher o tanque do seu carro com gasolina. Escreva um algoritmo para
// ler o preço do litro da gasolina e o valor que o motorista tem disponível para abastecer.
// Calcule quantos litros ele conseguiu colocar no tanque e exiba na tela

int main()
{

    float prcgaso, dinheiromotor, quantidade;

    printf("Qual o preço do litro da gasolina?");
    scanf("%f", &prcgaso);
    printf("Quanto você tem?");
    scanf("%f", &dinheiromotor);

    quantidade = dinheiromotor / prcgaso;

    printf("O total de gasolina colocada no carro foi: %f litros", quantidade);

    return 0;
}