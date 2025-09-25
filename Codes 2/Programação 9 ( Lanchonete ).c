#include <stdio.h>

int main() 
{
    int codigo, quantidade;
    double preco;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    if (codigo == 1) preco = 5.0;
    else if (codigo == 2) preco = 3.5;
    else if (codigo == 3) preco = 4.8;
    else if (codigo == 4) preco = 8.9;
    else if (codigo == 5) preco = 7.32;

    double total = preco * quantidade;

    printf("Valor a pagar: R$ %.2lf\n", total);

    return 0;
}
