#include <stdio.h>

int main() {
    int n, i;
    unsigned long long a = 0, b = 1, temp;

    printf("Digite o numero de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    printf("\nSequencia de Fibonacci:\n");

    for(i = 0; i < n; i++) {
        printf("%llu ", a);
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");

    return 0;
}
