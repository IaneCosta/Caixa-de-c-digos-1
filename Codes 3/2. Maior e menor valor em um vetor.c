#include <stdio.h>
int main()
{
    int i, maior, menor, vetor[15];
    printf("Digite um numero:");
    scanf("%d", &vetor[0]);
    maior = vetor[0];
    menor = vetor[0];
    for (i = 1; i < 10; i++)
    {
        printf("Digite um numero:");
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
        if (vetor[i] < menor)
        {
            menor = vetor[i];
        }
    }
    printf("\nO maior e o menor valor da sequencia e, respectivamente, %d e %d.\n", maior, menor);
    return 0;
}