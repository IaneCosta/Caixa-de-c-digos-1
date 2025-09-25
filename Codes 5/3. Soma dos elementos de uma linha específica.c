#include <stdio.h>

int somaLinha(int matriz[5][5], int linha) {
    int soma = 0;
    for (int j = 0; j < 5; j++)
        soma += matriz[linha][j];
    return soma;
}

int main() {
    int matriz[5][5] = {
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {1, 1, 1, 1, 1},
        {2, 2, 2, 2, 2},
        {9, 8, 7, 6, 5}
    };
    int linha;
    printf("Digite a linha (0 a 4): ");
    scanf("%d", &linha);
    if (linha >= 0 && linha < 5)
        printf("Soma da linha %d: %d\n", linha, somaLinha(matriz, linha));
    else
        printf("Linha inválida!\n");
    return 0;
}

