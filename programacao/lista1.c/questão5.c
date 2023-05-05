#include <stdio.h>

int main() {
    int num, i;

    // leitura do número positivo
    printf("Digite um número positivo: ");
    scanf("%d", &num);

    // impressão dos divisores do número
    printf("Os divisores de %d são: ", num);
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
