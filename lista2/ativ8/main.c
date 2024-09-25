//(30 °C × 9/5) + 32 =

int main()
{

    float temperaturac, temperaturaf;

    printf("Quantos graus celsius? ");
    scanf("%f", &temperaturac);

    temperaturaf = (temperaturac * 1.8) + 32;

    printf("sua temepratura em Fahrenheit é: %f", temperaturaf);

    return 0;
}