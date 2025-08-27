#include <stdio.h>

int main() {
    int torre;
    int rainha = 0;
    int bispo = 0; 
    int cavalo;
    
    // ================= TORRE =================
    // Usamos "for" para mover 5 casas para a direita.
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }

    // ================= BISPO =================
    // Usamos "while" para mover 5 casas na diagonal (Cima + Direita).
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // ================= RAINHA =================
    // Usamos "do-while" para mover 8 casas para a esquerda.
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

    
    //================== CAVALO ===================
     printf("\n");
    
     // 2 casas para baixo usando for
    for (cavalo = 0; cavalo < 2; cavalo++) {
    printf("Baixo\n");
   }

    // 1 casa para esquerda usando do-while
    int i = 0;
    do {
    printf("Esquerda\n");
    i++;
   } while (i < 1);

return 0;
}