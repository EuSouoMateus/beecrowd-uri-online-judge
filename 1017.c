#include <stdio.h>

int main() {
    double x, y, kml, litros;
    scanf("%lf %lf", &x, &y);

    kml = 12;
    litros = (y / kml) * x;

    printf("%.3lf\n", litros);
    return 0;
}
