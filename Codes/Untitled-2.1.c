#include <stdio.h>
#include <string.h>
void limpar_entrada() {
char c;
while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length) {
fgets(buffer, length, stdin);
strtok(buffer, "\n");
}
int main()
{
double salario1, salario2;
char nome1[50], nome2[50];
printf("Nome da primeira pessoa: ");
ler_texto(nome1, 50);
printf("Salario da primeira pessoa: ");
scanf("%lf", &salario1);
printf("Nome da segunda pessoa: ");
limpar_entrada();
ler_texto(nome2, 50);
printf("Salario da segunda pessoa: ");
scanf("%lf", &salario2);
printf("Nome 1: %s\n", nome1);
printf("Salario 1: %.2lf\n", salario1);
printf("Nome 2: %s\n", nome2);
printf("Salario 2: %.2lf\n", salario2);
return 0;
}