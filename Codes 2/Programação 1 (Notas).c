#include <stdio.h>
double nota1,nota2,media;
int main()
{
    printf("Digite a primeira nota:");
scanf("%lf", &nota1);
printf("Digite a segunda nota:");
scanf("%lf", &nota2);
media = (nota1 + nota2) / 2;
if (media < 6.0)
{
    printf("O aluno esta REPROVADO com media %.1lf", media);
}
else
{
    printf("O aluno esta APROVADO com media %.1lf", media);
}
return 0;
}