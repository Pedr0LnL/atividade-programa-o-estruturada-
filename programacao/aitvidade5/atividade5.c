#include <stdio.h>
#include <string.h>

int main() {
    char nome_completo[100];
    printf("Digite o nome completo: ");
    scanf("%[^\n]", nome_completo); // Lê a string com espaços em branco

    char sobrenome[50];
    char iniciais[5] = "";
    int posicao_iniciais = 0;
    int tamanho = strlen(nome_completo);

    // Percorre a string ao contrário até encontrar um espaço
    for (int i = tamanho - 1; i >= 0; i--) {
        if (nome_completo[i] == ' ') {
            // Copia o sobrenome para a variável sobrenome
            strcpy(sobrenome, &nome_completo[i+1]);

            // Copia as iniciais para a variável iniciais
            for (int j = i-1; j >= 0; j--) {
                if (nome_completo[j] == ' ') {
                    break;
                }
                iniciais[posicao_iniciais] = nome_completo[j];
                posicao_iniciais++;
                if (posicao_iniciais >= 3) {
                    break;
                }
            }
            break;
        }
    }

    // Configura a referência no formato SOBRENOME, Iniciais
    printf("%s, %s. em C\n", sobrenome, strrev(iniciais));

    return 0;
}
