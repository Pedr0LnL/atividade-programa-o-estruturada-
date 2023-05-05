#include <stdio.h>

#define PI 3.14159

int main() {
    double raio, area, volume;

    // leitura do raio da esfera
    scanf("%lf", &raio);

    // cálculo da área da superfície da esfera
    area = 4.0 * PI * raio * raio;

    // cálculo do volume da esfera
    volume = (4.0/3) * PI * raio * raio * raio;

    // exibição dos resultados
    printf("AREA = %.4lf\n", area);
    printf("VOLUME = %.4lf\n", volume);

    return 0;
}
