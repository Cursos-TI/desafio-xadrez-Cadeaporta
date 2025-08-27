#include <stdio.h>
 
int main() {
    int torre = 1;
    int rainha = 0;
    int bispo = 0; 
    
    
    
    
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n");
    }
    
    while (bispo <= 5)
    {
        printf("Cima, Direita\n");
        bispo++;
    }
    
    rainha = 0;
do {
    printf("Esquerda\n");
    rainha++;
} while (rainha < 8);
    

    














}