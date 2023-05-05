#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    // leitura das coordenadas dos pontos p1 e p2
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);

    // cálculo da distância entre p1 e p2
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // exibição do resultado com 4 casas decimais após a vírgula
    printf("%.4lf\n", distancia);

    return 0;
}
