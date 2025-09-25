#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,c,delta,x1,x2;
    printf("Digite os coeficientes a, b  e c:");
    scanf("%lf %lf %lf", &a,&b.&c);
    delta=pow(b,2)-4*a*c;
    if(delta>0)
{
    x1=(-b+sqrt(delta))/(2*a);
    x2=(-b-sqrt(delta))/(2*a);
    printf("As raizes sao x1 = %lf e x2 - %lf", x1,x2);
}
else if (delta = 0)
{
    x1=(-b)/(2*a);
    printf("A raiz unica e igual a %lf",x1);
}
else 
{
    x2=(+b)/(2*a);
    printf("A raiz unica e igual a %lf",x2);
}
return 0;
}