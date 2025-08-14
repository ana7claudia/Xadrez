#include <stdio.h>

int main() {
    // Variáveis de movimento
    int movimentoTorre = 5;   // casas para a torre (direita)
    int movimentoBispo = 5;   // casas para o bispo (diagonal cima-direita)
    int movimentoRainha = 8;  // casas para a Rainha (esquerda)
    int movimentoBaixo = 2;   // movimento do cavalo - baixo
    int movimentoEsquerda = 1; // movimento do cavalo - esquerda

    int i, j; // contadores

    // movimento da torre - for
    printf("=== Movimento da Torre ===\n");
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    // movimento do bispo - while
    printf("\n=== Movimento do Bispo ===\n");
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita (%d casa)\n", i);
        i++;
    }

    // movimento da rainha - do-while
    printf("\n=== Movimento da Rainha ===\n");
    i = 1;
    do {
        printf("Esquerda (%d casa)\n", i);
        i++;
    } while (i <= movimentoRainha);

    // movimento do cavalo - for + while (aninhados)
    printf("\n=== Movimento do Cavalo ===\n");

    // primeiro movimento: 2 casas para baixo (usando for)
    for (i = 1; i <= movimentoBaixo; i++) {
        printf("Baixo (%d movimento)\n", i);
    }

    // segundo movimento: 1 casa para esquerda (usando while)
    j = 1;
    while (j <= movimentoEsquerda) {
        printf("Esquerda (%d movimento)\n", j);
        j++;
    }

    return 0;
}
