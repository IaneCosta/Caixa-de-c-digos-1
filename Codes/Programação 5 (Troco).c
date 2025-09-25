#include <stdio.h>
 double preco, dinheiro, troco;
    int quantidade;
int main() 
{
    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);
    troco = dinheiro - (preco * quantidade);
    printf("TROCO = %.2lf\n", troco);
    return 0;
}
