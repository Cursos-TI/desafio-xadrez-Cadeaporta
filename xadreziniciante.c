#include <stdio.h>

int main() {
    int torre;
    int rainha = 0;
    int bispo = 0; 
    
    // ================= TORRE =================
    // A Torre se move em linha reta (horizontal ou vertical).
    // Usamos "for" para mover 5 casas para a direita.
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    // ================= BISPO =================
    // O Bispo se move em diagonais.
    // Usamos "while" para mover 5 casas na diagonal (Cima + Direita).
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // ================= RAINHA =================
    // A Rainha se move em todas as direções.
    // Usamos "do-while" para mover 8 casas para a esquerda.
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    return 0;
}
