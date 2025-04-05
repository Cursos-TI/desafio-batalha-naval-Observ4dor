#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.
#include <stdio.h>

#define TAMANHO_TABULEIRO 10
    
void exibirTabuleiro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO]){
    printf("  ");
    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    for (int i = 0; i < TAMANHO_TABULEIRO; i++)
    {
        printf("%d ", i);
        for (int j = 0; j < TAMANHO_TABULEIRO; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
}
//Função para criar Habilidade Cone
void aplicarCone(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],int x, int y){
    int desenho[3][5]= {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int novo_X = x + i - 1;
            int novo_Y = y + j - 2;
            tabuleiro[novo_X][novo_Y] = desenho[i][j];
        }        
    }    
}
 //Função para criar Habilidade Cruz   
void aplicarCruz(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO],int x, int y){
    int desenho[3][5] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            int novo_X = x + i - 1;
            int novo_Y = y + j - 2;
            tabuleiro[novo_X][novo_Y] = desenho[i][j];
        }        
    }    
}

//Função para criar Habilidade Octaedro
void aplicarOctaedro(int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO], int x, int y){
    int desenho[3][3] = {
        {0, 1, 0,},
        {1, 1, 1,},
        {0, 1, 0}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int novo_X = x + i - 1;
            int novo_Y = y + j - 2;
            tabuleiro[novo_X][novo_Y] = desenho[i][j];
        }        
    }    
}

int main(){
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};//cabeçalho de letras
    
    int tabuleiro[10][10] = {0}; // tabuleiro inicia com 0

    //Navio na horizontal
    tabuleiro[0][0] = 3;
    tabuleiro[0][1] = 3;
    tabuleiro[0][2] = 3;

    //Navio na vertical
    tabuleiro[6][9] = 3;
    tabuleiro[7][9] = 3;
    tabuleiro[8][9] = 3;

    //Navio 1 na diagonal
    tabuleiro[9][8] = 3;
    tabuleiro[8][7] = 3;
    tabuleiro[7][6] = 3;

    //Navio 2 na diagonal
    tabuleiro[0][9] = 3;
    tabuleiro[1][8] = 3;
    tabuleiro[2][7] = 3;

    //inicializando o jogo e imprimindo o cabeçalho com as letras a,b,c,d....
    printf("### Jogo de Batalha Naval ###\n");
    printf("  ");
    for (int i = 0; i < 10; i++)
    {
        printf("%c ", linha[i]);
    }
    printf("\n");


    //Aplicando Habilidades do nivel Mestre
    aplicarCone(tabuleiro,8, 2);
    aplicarCruz(tabuleiro, 3, 3);
    aplicarOctaedro(tabuleiro, 5, 8);


    //imprime as linhas do tabuleiro com numeros
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i + 1); // numero da linha de 1 a 10
        for (int j = 0; j < 10; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
  

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
