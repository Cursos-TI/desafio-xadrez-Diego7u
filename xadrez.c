#include <stdio.h>
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 1
// Definição dos movimentos das peças de xadrez

int main() {
    int i;

    // Movimento da Torre (for loop)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= MOVIMENTO_TORRE; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while loop)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= MOVIMENTO_BISPO) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimento da Rainha (do-while loop)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while (i <= MOVIMENTO_RAINHA);
    // Movimento do Cavalo (for loop)
    printf("\nMovimento do Cavalo:\n");
    for (i = 1; i <= MOVIMENTO_CAVALO; i++) {
        printf("Esquerda\n");
        int j;
        for (j = 0; j <= 1; j++)
        {
            printf("Baixo\n");
        }
        
    }

    return 0;
}