#include <stdio.h>
double a, b, c;
int main() 
{
    printf("Digite as tres medidas A, B e C:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    double area_quadrado = a * a;
    double area_triangulo = (a * b) / 2.0;
    double area_trapezio = ((a + b) * c) / 2.0;
    printf("AREA DO QUADRADO = %.4lf\n", area_quadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", area_triangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", area_trapezio);
    return 0;
}
