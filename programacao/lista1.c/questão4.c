#include <stdio.h>

int main() {
    double x, y;

    // leitura das coordenadas do ponto
    scanf("%lf %lf", &x, &y);

    // determinação do quadrante ou posição do ponto
    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    else if (x == 0) {
        printf("Eixo Y\n");
    }
    else if (y == 0) {
        printf("Eixo X\n");
    }
    else if (x > 0 && y > 0) {
        printf("Q1\n");
    }
    else if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    else if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    else {
        printf("Q4\n");
    }

    return 0;
}
