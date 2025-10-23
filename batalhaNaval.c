#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    /*
    - Nível Novato - Posicionamento dos Navios
    - Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    - Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    - Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
    */
    printf("\n----- Nível Novato - Posicionamento dos Navios -----\n\n");
    int tabuleiro1[5][5] = {0}; // Tabuleiro 5x5
    
    int x1 = 1, y1 = 2; // Navio 1 (vertical)
    for (int i = 0; i < 3; i++) {
        tabuleiro1[x1 + i][y1] = 3;
        printf("Navio Vertical - Coordenada: (%d, %d)\n", x1 + i, y1);
    }

    int x2 = 3, y2 = 0; // Navio 2 (horizontal)
    for (int j = 0; j < 3; j++) {
        tabuleiro1[x2][y2 + j] = 3;
        printf("Navio Horizontal - Coordenada: (%d, %d)\n", x2, y2 + j);
    }
    /* 
    - Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    - Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    - Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    - Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    */
    printf("\n----- Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal -----\n");

    int tabuleiro2[10][10] = {0};
    
    for (int i = 1; i <= 3; i++) // Navio vertical
        tabuleiro2[i][2] = 3; 
    
    for (int j = 4; j <= 6; j++) // Navio horizontal
        tabuleiro2[5][j] = 3;
    
    for (int i = 0; i < 3; i++) // Navio diagonal principal para direita
        tabuleiro2[i + 1][i + 6] = 3;
    
    for (int i = 0; i < 3; i++) // Navio diagonal secundária para esquerda
        tabuleiro2[i + 6][8 - i] = 3;

    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n\n"); // Exibição completa do tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro2[i][j]);
        }
        printf("\n");
    }
    /* 
    - Nível Mestre - Habilidades Especiais com Matrizes
    - Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    - Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    - Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.
        
    Exemplos de exibição das habilidades:
       
    Exemplo para habilidade em cone:
    0 0 1 0 0
    0 1 1 1 0
    1 1 1 1 1
    
    Exemplo para habilidade em octaedro:
    0 0 1 0 0
    0 1 1 1 0
    0 0 1 0 0

    Exemplo para habilidade em cruz:
    0 0 1 0 0
    1 1 1 1 1
    0 0 1 0 0
    */
    printf("\n----- Nível Mestre - Habilidades Especiais com Matrizes -----\n");

    // Habilidade em Cone
    int cone[5][5] = {0};
    cone[0][2] = 1;
    cone[1][1] = cone[1][2] = cone[1][3] = 1;
    for (int j = 0; j < 5; j++) cone[2][j] = 1;

    printf("Habilidade em CONE:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++)
        printf("%d", cone[i][j]);
        printf("\n");
        }

    // Habilidade em Octaedro
    int octaedro[5][5] = {0};
    octaedro[0][2] = 1;
    octaedro[1][1] = octaedro[1][2] = octaedro[1][3] = 1;
    octaedro[2][2] = 1;

    printf("\nHabilidade em OCTAEDRO:\n"); 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", octaedro[i][j]);
        printf("\n");
    }

    // Habilidade em Cruz
    int cruz[5][5] = {0};
    for (int j = 0; j < 5; j++) cruz[1][j] = 1;
    cruz[0][2] = cruz[2][2] = 1;

    printf("\nHabilidade em CRUZ:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) printf("%d ", cruz[i][j]);
        printf("\n");
    }

    printf("\n----- FIM DO DESAFIO BATALHA NAVAL -----\n");

    return 0;
}
