#include <stdio.h>

#define LINHA 12
#define COLUNA 12

int main()
{
    int matriz[LINHA][COLUNA];

    // Inicializa com zeros
    for (int i = 0; i < LINHA; i++)
        for (int j = 0; j < COLUNA; j++)
            matriz[i][j] = 0;

    
    //  PIRÂMIDE 
   
    int base_piramide = 3;   // altura da pirâmide
    int centro_piramide = 2; // coluna central da pirâmide (ajuste manual)
    for (int i = 0; i < base_piramide; i++)
    {
        int inicio = centro_piramide - i; 
        int fim = centro_piramide + i;
        for (int j = inicio; j <= fim; j++)
        {
            if (j >= 0 && j < COLUNA)
                matriz[i + 1][j] = 1; // deslocada uma linha para baixo
        }
    }

    
    //  CRUZ 
   
    int linha_central = 3;  // linha onde passa o traço horizontal
    int coluna_central = 8; // coluna onde passa o traço vertical

    // Linha horizontal da cruz
    for (int j = 7; j <= 11; j++)
        matriz[linha_central][j] = 2;

    // Coluna vertical da cruz
    for (int i = 1; i <= 5; i++)
        matriz[i][coluna_central] = 2;
    
    //  LOSANGO

    int centro_losango_linha = 8;
    int centro_losango_coluna = 3;
    int tam_losango = 2; // metade da altura
    for (int i = -tam_losango; i <= tam_losango; i++)
    {
        int linha = centro_losango_linha + i;
        int largura = tam_losango - (i < 0 ? -i : i);
        for (int j = -largura; j <= largura; j++)
        {
            int coluna = centro_losango_coluna + j;
            if (linha >= 0 && linha < LINHA && coluna >= 0 && coluna < COLUNA)
                matriz[linha][coluna] = 3;
        }
    }

    // =====================================
    // Impressão final
    // =====================================
    for (int i = 0; i < LINHA; i++)
    {
        for (int j = 0; j < COLUNA; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}