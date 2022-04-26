#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LIN 3
#define COL 3

void preenche(int lin, int col, int principal[lin][col])
{
    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            principal[i][j] = rand() % 100 + 1;
        }
    }
}

void imprime(int lin, int col, int principal[lin][col])
{

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("[%d]", principal[i][j]);
        }
        printf("\n");
    }
}

float calculatotal(int lin, int col, int principal[lin][col])
{

    float media = 0;

    for (int i = 0; i < lin; i++)
    {
        for (int j = 0; j < col; j++)
        {
            media = media + principal[i][j];
        }
    }
    media = media / (lin * col);
    
    return media;
}

void calculalincol(int linha, int coluna, int principal[linha][coluna], float lin[], float col[])
{
    float media = 0;

    for (int i = 0; i < linha; i++)
    {
        media = 0;
        for (int j = 0; j < coluna; j++)
        {
            media = media + principal[i][j];
        }

        lin[i] = media / coluna;
    }

    for (int j = 0; j < coluna; j++)
    {
        media = 0;
        for (int i = 0; i < linha; i++)
        {
            media = media + principal[i][j];
        }

        col[j] = media / linha;
    }
}

int main()
{
    int principal[LIN][COL];
    float mediaLinhas[LIN];
    float mediaColunas[COL];

    srand(time(NULL));

    preenche(LIN, COL, principal);

    imprime(LIN, COL, principal);

    printf("Media = %.2f\n\n", calculatotal(LIN, COL, principal));

    calculalincol(LIN, COL, principal, mediaLinhas, mediaColunas);

    for (int i = 0; i < LIN; i++)
    {
        printf("Media linha %d = %.2f\n", i, mediaLinhas[i]);
    }

    for (int i = 0; i < COL; i++)
    {
        printf("Media coluna %d = %.2f\n", i, mediaColunas[i]);
    }
}