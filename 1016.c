#include <stdio.h>

int main() { 
    int num, horas, distanciar, minutos;
    scanf("%d", &num);

    horas = 60;
    distanciar = 30;
    minutos = (horas * num) / distanciar;

    printf("%d minutos\n", minutos);
    return 0;
}
