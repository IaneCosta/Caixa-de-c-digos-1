#include <stdio.h>

int main() {
    int vetor[20], i, pares = 0, impares = 0;

    printf("Digite 20 numeros inteiros:\n");
    for(i = 0; i < 20; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if(vetor[i] % 2 == 0)
            pares++;
        else
            impares++;
    }

    printf("\nPares: %d\nImpares: %d\n", pares, impares);

    return 0;
}
