int main()
{

    float preco, precod;

    printf("Qual o preço da roupa?");
    scanf("%f", &preco);

    precod = (preco * 0.85);

    printf("O valor com desconto é: %f", precod);


    return 0;
}