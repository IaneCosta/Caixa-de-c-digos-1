#include <stdio.h>
 int distancia;
    double combustivel, consumo;
int main()
{
    printf("Distancia percorrida (km): ");
    scanf("%d", &distancia);
    printf("Combustivel gasto (litros): ");
    scanf("%lf", &combustivel);
    consumo = distancia / combustivel;
    printf("Consumo medio = %.3lf km/l\n", consumo);
    return 0;
}
