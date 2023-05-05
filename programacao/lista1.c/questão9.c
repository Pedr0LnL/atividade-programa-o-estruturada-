#include <stdio.h>

int main() {
    int opcao, quantidade;
    float total = 0;

    do {
        // Exibir o menu de opções
        printf("Menu de frutas:\n");
        printf("1 - Abacaxi (R$ 5,00)\n");
        printf("2 - Maça (R$ 1,00)\n");
        printf("3 - Pera (R$ 4,00)\n");
        printf("0 - Finalizar compra\n");

        // Ler a opção escolhida pelo usuário
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                // Abacaxi
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += 5.0 * quantidade;
                break;
            case 2:
                // Maça
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += 1.0 * quantidade;
                break;
            case 3:
                // Pera
                printf("Digite a quantidade desejada: ");
                scanf("%d", &quantidade);
                total += 4.0 * quantidade;
                break;
            case 0:
                // Finalizar compra
                printf("Compra finalizada.\n");
                break;
            default:
                // Opção inválida
                printf("Opcao invalida.\n");
                break;
        }

    } while (opcao != 0);

    // Exibir o total da compra
    printf("Total da compra: R$ %.2f\n", total);

    return 0;
}
