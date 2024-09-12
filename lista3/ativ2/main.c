

int main()
{
    float numA, numB, numC, clcA, clcB;

    printf("Informe o valor A: ");
    scanf("%f", &numA);
    printf("Informe o valor B: ");
    scanf("%f", &numB);
    printf("Informe o valor C: ");
    scanf("%f", &numC);
    printf("As contas (A + B) e (A + C) serão feitas e testadas.\n\n");

if (clcA < clcB)
{
    clcA = numA+numB;
    printf("(A + B) é menor do que (A + C).");
} else {
    clcB = numA+numC;
     printf("(A + C) é menor do que (A + B).");
}



return 0;
}