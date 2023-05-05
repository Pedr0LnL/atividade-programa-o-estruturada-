#include <stdio.h>

int main() {
    int n, i, fibAnterior = 0, fibAtual = 1, fibProximo;

    printf("Digite um número inteiro maior ou igual a zero: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O enésimo termo da sequência de Fibonacci é: 0\n");
        return 0;
    } else if (n == 1) {
        printf("O enésimo termo da sequência de Fibonacci é: 1\n");
        return 0;
    }

    for (i = 2; i <= n; i++) {
        fibProximo = fibAnterior + fibAtual;
        fibAnterior = fibAtual;
        fibAtual = fibProximo;
    }

    printf("O enésimo termo da sequência de Fibonacci é: %d\n", fibAtual);

    return 0;
}
