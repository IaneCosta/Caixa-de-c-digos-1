#include <stdio.h>
int x, y, soma;
int main() 
{
    printf("Digite o valor de X: ");
    scanf("%d", &x);
    printf("Digite o valor de Y: ");
    scanf("%d", &y);
    soma = x + y;
    printf("SOMA = %d\n", soma);
    return 0;
}
