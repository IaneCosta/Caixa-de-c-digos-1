#include <stdio.h>

int maiorElemento(int matriz[4][4]) {
    int maior = matriz[0][0];
    for (int i = 0; i < 4; i++) 
        for (int j = 0; j < 4; j++) 
            if (matriz[i][j] > maior)
                maior = matriz[i][j];
    return maior;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {8, 6, 2, 1},
        {7, 9, 0, 5},
        {6, 3, 4, 7}
    };
    printf("Maior elemento: %d\n", maiorElemento(matriz));
    return 0;
}
