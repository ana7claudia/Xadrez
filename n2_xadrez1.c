#include <stdio.h>

int main() {
    
    int movimentoTorre = 5; // numero de casa para a torre (para a direita)
    int movimentoBispo = 5; // numero de casas para o bispo (diagonal cima-direita)
    int movimentoRainha = 8; // numero de casas para a rainha (para a esquerda)

    int i;

    printf("=== Movimento da Torre ===\n");
    // movimento da torre - usar for
    for (i = 1; i <= movimentoTorre; i++) {
        printf("Direita (%d casa)\n", i);
    }

    printf("\n=== Movimento do Bispo ===\n");
    // movimento do bispo - usar while
    i = 1;
    while (i <= movimentoBispo) {
        printf("Cima Direita (%d casa)\n", i);
        i++;
    }

    printf("\n=== Movimento da Rainha ===\n");
    // movimento da rainha - usar do while
    i = 1;
    do {
        printf("Esquerda (%d casa)\n", i);
        i++;
    } while (i <= movimentoRainha);

    return 0;
}
