#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {

// Nível Novato - Posicionamento dos Navios
   // printf(" A B C D E F G H I J\n");
    char letras[10] = {'A','B','C','D','E','F','G','H','I','J'};

    for (int i = 0; i < 10; i++){
        printf(" %c ", letras[i]);
    }
    printf("\n");

    // Matriz números
    int linhas[9][10] = {
        {1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {2, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {3, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {4, 0, 0, 0, 0, 0, 0, 3, 0, 0},
        {5, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {6, 0, 0, 3, 3, 3, 0, 0, 0, 0},
        {7, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {8, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {9, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    };

    // Lógica para printar a Matriz
    for (int indexlinha = 0; indexlinha < 9; indexlinha++){
        for (int indexColuna = 0; indexColuna < 10; indexColuna++){
            printf(" %d ", linhas[indexlinha][indexColuna]);
        }
        printf("\n");
    }
    // Printando Coordenadas Navios
    //  printf("\n");
    printf("--> Coordenadas Navio Horizontal: %c%d,%c%d,%c%d!\n", letras[7], linhas[1][0], letras[7], linhas[2][0], letras[7], linhas[3][0]);
    printf("--> Coordenadas Navio Vertical: %c%d,%c%d,%c%d!\n", letras[3], linhas[5][0], letras[5], linhas[5][0], letras[6], linhas[5][0]);
    return 0;
}
    // linhas[1][0] = 2 (linha/coluna)
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1

    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0
