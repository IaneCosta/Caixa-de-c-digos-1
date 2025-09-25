#include <stdio.h>

int main() {
    int vetor[10], inverso[10], i;

    printf("Digite 10 numeros:\n");
    for(i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        inverso[i] = vetor[9 - i];
    }

    printf("\nVetor invertido:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", inverso[i]);
    }
    printf("\n");

    return 0;
}
