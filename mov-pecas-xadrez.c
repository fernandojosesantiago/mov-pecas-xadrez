#include <stdio.h>

void numberMaior(); // Declaração da funçãos
int main() {
    // Movimentação da Torre
    int i;
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    int j = 0;  // inicializando contador do while
    while (j < 5) {
        printf("Cima Direita\n");
        j++;
    }

    // Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    int k = 0;  // inicializando contador do do-while
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    numberMaior(); // Chama a função para verificar o maior número

    return 0;
}