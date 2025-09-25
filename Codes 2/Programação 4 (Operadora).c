#include <stdio.h>
int main()
{
    double valor;
    int minutos;
    printf("Digite a quantidade de minutos consumida:");
    scanf("%lf", &minutos);
    if (minutos <= 100)
{
    printf("O valor da conta e R$ 50.00");
}
else
{
    valor=(minutos-100)*2.00+50;
    printf("O valor da conta e R$ %.2lf ", valor)
}
return 0;
}