#include <stdio.h>
double larg,comp,area,valorm2,preco;
int main()
{
    printf("Digite a largura do terreno: ");
    scanf("%lf",&larg);
    printf("Digite o valor do comprimento:");
    area = comp * larg;
    printf ("Digite o valor do metro quadrado: ");
    scanf("%lf", &valorm2);
    preco = area * valorm2;
    printf("A area do terreno e: %.2lf\n",area);
     printf("A preco do terreno e: %.2lf\n",preco);
     return 0;
}