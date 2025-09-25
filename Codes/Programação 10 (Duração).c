#include <stdio.h>
int totalSegundos, horas, minutos, segundos;
int main() 
{
    printf("Digite a duracao em segundos: ");
    scanf("%d", &totalSegundos);
    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
    return 0;
}
