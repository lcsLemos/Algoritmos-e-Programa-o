int main()
{

    float camisetas, calcas, cintos, valord, valorroupasd;

    printf("Quantas camisetas foram vendidos?");
    scanf("%f", &camisetas);
    printf("Quantas calças foram vendidos?");
    scanf("%f", &calcas);
    printf("Quantos cintos foram vendidos?");
    scanf("%f", &cintos);

    valord = ((camisetas * 25) + (calcas * 100) + (cintos * 40))* 0.1;
    valorroupasd = ((camisetas * 25) + (calcas * 100) + (cintos * 40))*0.9;

    printf("O cliente gastou o valor: %f\n\n", valorroupasd);
    printf("O desconto de %f foi aplicado", valord);


    return 0;
}