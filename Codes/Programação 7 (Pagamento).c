#include <stdio.h>
char nome[50];
    double valorHora, pagamento;
    int horas;
int main() 
{
    printf("Nome: ");
    scanf(" %49[^\n]", nome);
    printf("Valor por hora: ");
    scanf("%lf", &valorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);
    pagamento = valorHora * horas;
    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);
    return 0;
}
