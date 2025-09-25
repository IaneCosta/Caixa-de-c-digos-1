#include <stdio.h>

int main() {
    int vetor1[5], vetor2[5], produto = 0, i;

    printf("Digite 5 elementos do primeiro vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("Vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite 5 elementos do segundo vetor:\n");
    for(i = 0; i < 5; i++) {
        printf("Vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    for(i = 0; i < 5; i++) {
        produto += vetor1[i] * vetor2[i];
    }

    printf("\nProduto escalar: %d\n", produto);

    return 0;
}
