#include <stdio.h>

void somaDiagonais(int matriz[3][3], int *principal, int *secundaria) {
    *principal = 0;
    *secundaria = 0;
    for (int i = 0; i < 3; i++) {
        *principal += matriz[i][i];
        *secundaria += matriz[i][2 - i];
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int dp, ds;
    somaDiagonais(matriz, &dp, &ds);
    printf("Diagonal principal: %d\n", dp);
    printf("Diagonal secundária: %d\n", ds);
    return 0;
}

