#include <stdio.h>

#define MOVIMENTO_TORRE 5
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO 1

// Função recursiva para o movimento da Torre
void movimentoTorre(int passos) {
    if (passos > 0) {
        printf("Direita\n");
        movimentoTorre(passos - 1);
    }
}

// Função recursiva para o movimento da Rainha
void movimentoRainha(int passos) {
    if (passos > 0) {
        printf("Esquerda\n");
        movimentoRainha(passos - 1);
    }
}

// Função recursiva para o movimento do Bispo com loops aninhados
void movimentoBispo(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int i = 0; i < horizontal; i++) {
            printf("Cima, Direita\n");
        }
        movimentoBispo(vertical - 5, horizontal);
    }
}

// Aprimorando o movimento do Cavalo com loops aninhados e controle de fluxo
void movimentoCavalo() {
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
        for (int j = 0; j < 1; j++) {
            if (i == 1) {
                printf("Direita\n");
                continue; 
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    movimentoTorre(MOVIMENTO_TORRE);

    printf("\nMovimento da Rainha:\n");
    movimentoRainha(MOVIMENTO_RAINHA);

    printf("\nMovimento do Bispo:\n");
    movimentoBispo(MOVIMENTO_BISPO, MOVIMENTO_BISPO);

    printf("\nMovimento do Cavalo:\n");
    movimentoCavalo();

    return 0;
}