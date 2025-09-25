#include <stdio.h>
int main()
{
    double preco,dinheiro,troco;
    int qtd;
    printf("Preço unitário do produto:");
    scanf("%lf", &preco);
    printf("Quantidade comprada:");
    scanf("%lf", &qtd);
    printf("Dinheiro recebido:");
    scanf("%lf", &dinheiro);
    troco = dinheiro - (preco * qtd);
    if (troco < 0);
{
    troco = (-troco);
    printf("Faltam R$ %.2lf para a compra", troco);
}
else
{
    printf("TROCO = R$ %.2lf\n", troco);
}
return 0;
}