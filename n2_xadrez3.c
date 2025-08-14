#include <stdio.h>

// Função recursiva para o movimento da Torre
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita (%d casa)\n", casasRestantes);
    moverTorre(casasRestantes - 1);
}

// Função recursiva para o movimento da Rainha
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda (%d casa)\n", casasRestantes);
    moverRainha(casasRestantes - 1);
}

// Função recursiva para o movimento do Bispo
void moverBispo(int vertical, int horizontal) {
    if (vertical == 0 || horizontal == 0) return;
    
    printf("Cima Direita (%d movimento vertical, %d movimento horizontal)\n", vertical, horizontal);
    moverBispo(vertical - 1, horizontal - 1);
}

int main() {
    // Variáveis
    int movimentoTorre = 5;    // Direita
    int movimentoBispo = 5;    // Diagonal (Cima Direita)
    int movimentoRainha = 8;   // Esquerda

    int movimentoCavaloVertical = 2; // Cavalo: 2 para cima
    int movimentoCavaloHorizontal = 1; // 1 para direita

    int i, j; // Contadores

    // Movimento da Torre (recursivo)
    printf("=== Movimento da Torre ===\n");
    moverTorre(movimentoTorre);

    // Movimento do Bispo (recursivo e loops aninhados)
    printf("\n=== Movimento do Bispo (Recursão + Loops) ===\n");
    // Loop externo - movimento vertical
    for (i = 1; i <= movimentoBispo; i++) {
        // Loop interno - movimento horizontal
        for (j = 1; j <= movimentoBispo; j++) {
            if (i == j) { // Simula a diagonal (só andar na diagonal exata)
                printf("Cima Direita (Vertical %d, Horizontal %d)\n", i, j);
            }
        }
    }
    printf("\n=== Movimento do Bispo (Recursivo) ===\n");
    moverBispo(movimentoBispo, movimentoBispo);

    // Movimento da Rainha (recursivo)
    printf("\n=== Movimento da Rainha ===\n");
    moverRainha(movimentoRainha);

    // Movimento do Cavalo (loops aninhados complexos)
    printf("\n=== Movimento do Cavalo ===\n");
    int movimentosFeitos = 0;

    for (i = 0; i < movimentoCavaloVertical + movimentoCavaloHorizontal; i++) {
        if (i < movimentoCavaloVertical) {
            printf("Cima (%d movimento)\n", i + 1);
        } else {
            // Dentro de outro loop controlando o movimento para direita
            for (j = 0; j < movimentoCavaloHorizontal; j++) {
                if (j == 0) {
                    printf("Direita (%d movimento)\n", j + 1);
                    break; // Sai do segundo loop após o movimento
                } else {
                    continue; // Caso extra, nunca será usado, mas para treinar continue
                }
            }
        }
        movimentosFeitos++;
    }

    printf("\nTotal de movimentos do Cavalo: %d\n", movimentosFeitos);

    return 0;
}
