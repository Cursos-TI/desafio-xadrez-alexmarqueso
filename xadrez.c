#include <stdio.h>

// Função recursiva para simular o movimento da Torre (n casas para a direita)
void moverTorreRecursivo(int n) {
    if (n > 0) {
        printf("Direita\n");
        moverTorreRecursivo(n - 1);
    }
}

// Função recursiva para simular o movimento do Bispo (n casas na diagonal para cima e à direita)
void moverBispoRecursivo(int n) {
    if (n > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(n - 1);
    }
}

// Função recursiva para simular o movimento da Rainha (n casas para a esquerda)
void moverRainhaRecursivo(int n) {
    if (n > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(n - 1);
    }
}

int main() {
    // Desafio: Movimentando as Peças do xadrez
    // Nível: Mestre (código base), Aventureiro (Cavalo), Mestre (Recursividade e Loops Complexos)
    // Este programa simula o movimento de peças de xadrez utilizando recursividade e loops complexos.

    // Simulação do movimento da Torre (recursão)
    printf("--- Movimento da Torre (Recursivo) ---\n");
    moverTorreRecursivo(5);
    printf("\n");

    // Simulação do movimento do Bispo (recursão e loops aninhados)
    printf("--- Movimento do Bispo (Recursivo e Loops Aninhados) ---\n");
    // Loop externo para movimento vertical (simulando a diagonal)
    for (int vertical = 0; vertical < 5; vertical++) {
        // Loop interno para movimento horizontal (simulando a diagonal)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima, Direita\n");
        }
    }
    printf("\n");

    // Simulação do movimento da Rainha (recursão)
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    moverRainhaRecursivo(8);
    printf("\n");

    // Simulação do movimento do Cavalo (loops aninhados complexos)
    printf("--- Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    printf("Movimento em 'L' (2 casas para cima, 1 casa para a direita):\n");

    // Loop externo para controlar as "tentativas" de movimento
    for (int tentativa = 0; tentativa < 1; tentativa++) {
        // Loop interno para simular as duas casas para cima
        for (int cima = 0; cima < 2; cima++) {
            printf("Cima\n");
        }
        // Loop interno para simular uma casa para a direita
        for (int direita = 0; direita < 1; direita++) {
            printf("Direita\n");
        }
    }
    printf("\n");

    return 0;
}