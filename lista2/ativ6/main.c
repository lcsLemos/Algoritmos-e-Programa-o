int main()
{

    int tablets, smartphones, valortotal;

    printf("Quantos smartphones foram vendidos?");
    scanf("%d", &smartphones);
    printf("Quantos tablets foram vendidos?");
    scanf("%d", &tablets);

    valortotal = (1500 * tablets) + (1000 * smartphones);

    printf("Foram arrecadados com as vendas %d", valortotal);

    return 0;
}