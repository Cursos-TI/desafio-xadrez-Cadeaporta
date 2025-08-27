#include <stdio.h>

void torrevoid(int torre) {
   
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }
}

void bispovoid(int bispo) {

    for (bispo = 0; bispo < 2; bispo++) {
    printf("cima\n");
     break;
    }
   

    // 1 casa para esquerda usando do-while
    int b = 0;
    do {
    printf("direita\n");
    b++;
   } while (b < 1);
}

void rainhavoid(int rainha) {
   
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);

}

int main() {
    int torre;
    int rainha = 0;
    int bispo = 0; 
    int cavalo;
    
    // ================= TORRE =================
    torrevoid(torre);
    

    // ================= BISPO =================
    bispovoid(bispo);

    // ================= RAINHA =================
    rainhavoid(rainha);
        
    //================== CAVALO ===================
     printf("\n");
    
     // 2 casas para baixo usando for
    for (cavalo = 0; cavalo < 2; cavalo++) {
    printf("cima\n");
    }
   

    // 1 casa para esquerda usando do-while
    int i = 0;
    do {
    printf("direita\n");
    i++;
   break;} while (i < 1);
   

return 0;
}