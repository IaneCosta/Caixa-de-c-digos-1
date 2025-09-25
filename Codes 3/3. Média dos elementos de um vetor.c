#include <stdio.h>

int main() {
    float vetor[8], soma = 0, media;
    int i;

    printf("Digite 8 numeros reais:\n");
    for(i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma += vetor[i];
    }

    media = soma / 8;

    printf("\nMedia aritmetica: %.2f\n", media);

    return 0;
}
