#include <stdio.h>

int main() {
    // Desafio: Movimentando as Peças do xadrez
    // Nível: Novato
    // Este programa simula o movimento de três peças de xadrez: Torre, Bispo e Rainha,
    // utilizando diferentes estruturas de repetição em C.

    // Simulação do movimento da Torre
    printf("--- Movimento da Torre ---\n");
    // A Torre move-se em linha reta horizontalmente ou verticalmente.
    // Simulação do movimento da Torre cinco casas para a direita usando a estrutura for.
    printf("Movimento 5 casas para a direita:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo
    printf("--- Movimento do Bispo ---\n");
    // O Bispo move-se na diagonal.
    // Simulação do movimento do Bispo cinco casas na diagonal para cima e à direita
    // usando a estrutura while.
    printf("Movimento 5 casas na diagonal (Cima, Direita):\n");
    int movimentos_bispo = 0;
    while (movimentos_bispo < 5) {
        printf("Cima, Direita\n");
        movimentos_bispo++;
    }
    printf("\n");

    // Simulação do movimento da Rainha
    printf("--- Movimento da Rainha ---\n");
    // A Rainha move-se em todas as direções.
    // Simulação do movimento da Rainha oito casas para a esquerda usando a estrutura do-while.
    printf("Movimento 8 casas para a esquerda:\n");
    int movimentos_rainha = 0;
    do {
        printf("Esquerda\n");
        movimentos_rainha++;
    } while (movimentos_rainha < 8);
    printf("\n");

    return 0;
}