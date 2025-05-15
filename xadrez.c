#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.


    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.


// Função recursiva para mover a Torre: 5 casas para a direita
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}

// Função recursiva para mover o Bispo: 5 casas na diagonal superior direita
void moverBispo(int casas) {
    if (casas > 0) {
        printf("Diagonal superior direita\n");
        moverBispo(casas - 1);
    }
}

// Função recursiva para mover a Rainha: 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

// Movimento do Cavalo: 1 movimento em L (baixo + esquerda)
void moverCavalo() {
    int lMovimentos = 0;

    for (int vertical = 0; vertical < 3; vertical++) {
        int horizontal = 0;
        while (horizontal < 3) {
            // Cavalo se move em L: 2 para baixo + 1 para o lado OU 1 para baixo + 2 para o lado
            if ((vertical == 2 && horizontal == 1) || (vertical == 1 && horizontal == 2)) {
                printf("baixo\n");
                printf("baixo\n");
                printf("esquerda\n");
                
                lMovimentos++;
                break;
            }
            horizontal++;
            continue;
        }
        if (lMovimentos > 0) break;
    }
}

int main() {
    printf("Torre:\n");
    moverTorre(5); // 5 para a direita

    printf("\nBispo:\n");
    moverBispo(5); // 5 na diagonal superior direita

    printf("\nRainha:\n");
    moverRainha(8); // 8 para a esquerda

    printf("\nCavalo:\n");
    moverCavalo(); // Cavalo em L (baixo + esquerda)

    return 0;
}
