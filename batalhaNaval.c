#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main()
{

    printf("JOGO DE BATALHA NAVAL \n");
    printf("--------------------\n");
    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10];

    // iniciar com zero

    for (int i = 0; i < 10; i++)
    {
        for( int j = 0; j<10; j++)
        {
            tabuleiro[i][j]=0;
        }
    }

    tabuleiro[2][3] = 7;  // COLOCANDO O 7 NA CASA 'D3
    tabuleiro[2][4] = 7;  // COLOCANDO O 7 NA CASA 'E3'
    tabuleiro[2][5] = 7;  // COLOCANDO O 7 NA CASA 'F3'
    tabuleiro[5][7] = 7; // ACRESCENTANDO O 7 NA CASA H6
    tabuleiro[6][7] = 7; // ACRESCENTANDO O 7 NA CASA H7
    tabuleiro[7][7] = 7; // ACRESCENTANDO O 7 NA CASA H8

    
    // imprimir colunas
    for ( int j = 0; j<10; j++)
        printf(" %c", letras[j]);

    printf("\n");

    // Imprimir linhas 
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i+ 1);
        for ( int j = 0; j< 10; j++)
        {
            printf("%d ",tabuleiro[i][j]);
        }
        printf("\n");
        
    }

   

    return  0;
}


