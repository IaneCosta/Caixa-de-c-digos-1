#include <stdio.h>
#define PI 3.14159
   double raio, area;
int main() 
{
    printf("Digite o valor do raio do circulo: ");
    scanf("%lf", &raio);
    area = PI * raio * raio;
    printf("AREA = %.3lf\n", area);
    return 0;
}
