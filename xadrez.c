#include <stdio.h>

int main() {
    // Desafio: Movimentando as Peças do xadrez
    // Nível: Novato (código base) e Aventureiro (Cavalo)
    // Este programa simula o movimento de três peças de xadrez: Torre, Bispo e Rainha,
    // utilizando diferentes estruturas de repetição em C, e agora adiciona o Cavalo
    // com loops aninhados (for e while).

    // Simulação do movimento da Torre
    printf("--- Movimento da Torre ---\n");
    printf("Movimento 5 casas para a direita:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Simulação do movimento do Bispo
    printf("--- Movimento do Bispo ---\n");
    printf("Movimento 5 casas na diagonal (Cima, Direita):\n");
    int movimentos_bispo = 0;
    while (movimentos_bispo < 5) {
        printf("Cima, Direita\n");
        movimentos_bispo++;
    }
    printf("\n");

    // Simulação do movimento da Rainha
    printf("--- Movimento da Rainha ---\n");
    printf("Movimento 8 casas para a esquerda:\n");
    int movimentos_rainha = 0;
    do {
        printf("Esquerda\n");
        movimentos_rainha++;
    } while (movimentos_rainha < 8);
    printf("\n");

    // Simulação do movimento do Cavalo com loops aninhados (for e while) - ESTRUTURA ANINHADA (menos intuitiva)
    printf("--- Movimento do Cavalo (Estrutura Aninhada) ---\n");
    printf("Movimento em 'L' (2 casas para baixo, 1 casa para a esquerda) com loops aninhados:\n");

    // Loop externo (for) - pode controlar "etapas" genéricas
    for (int i = 0; i < 3; i++) {
        int contador_interno = 0;
        // Loop interno (while) - controla a ação para a "etapa" atual
        while (contador_interno < 1) {
            if (i < 2) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            contador_interno++;
        }
    }
    printf("\n");
    
    return 0;
}