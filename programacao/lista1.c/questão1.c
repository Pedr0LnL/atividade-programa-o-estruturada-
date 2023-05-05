git#include <stdio.h>

int main() {
    int A, B, C, D, diferenca;

    // leitura dos valores de A, B, C e D
    scanf("%d %d %d %d", &A, &B, &C, &D);

    // cálculo da diferença
    diferenca = (A * B) - (C * D);

    // exibição do resultado no formato especificado
    printf("DIFERENCA = (%d * %d - %d * %d)\n", A, B, C, D);
    printf("DIFERENCA = %d\n", diferenca);

    return 0;
}
