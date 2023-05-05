#include <stdio.h>

int main() {
    int numero, maior, menor;

    printf("Digite um numero inteiro (negativo para sair): ");
    scanf("%d", &numero);

    maior = menor = numero;

    while (numero >= 0) {
        if (numero > maior) {
            maior = numero;
        }
        if (numero < menor) {
            menor = numero;
        }

        printf("Digite um numero inteiro (negativo para sair): ");
        scanf("%d", &numero);
    }

    printf("Maior numero lido: %d\n", maior);
    printf("Menor numero lido: %d\n", menor);

    return 0;
}
