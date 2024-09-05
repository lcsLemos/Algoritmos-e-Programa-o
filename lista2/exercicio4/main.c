int main()
{

    int nota1, nota2, notafinal;

    printf("Digite sua nota A: ");
    scanf("%d", &nota1);

    printf("Digite sua nota B: ");
    scanf("%d", &nota2);

    notafinal = (nota1 * 0.33) + (nota2 * 0.66);

    printf("Sua nota final é: %d", notafinal);
}