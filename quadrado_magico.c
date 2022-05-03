#include <stdio.h>
#include <stdlib.h>

int quadradoMagico(int mat[][3]) {
    int soma = 0;
    int somaAtual;

    for (int i = 0; i < 3; i++)
    {
        somaAtual = 0;

        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                soma += mat[i][j];
            }
                
            somaAtual += mat[i][j];
        }

        if (soma != somaAtual)
        {
            return 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        somaAtual = 0;

        for (int j = 0; j < 3; j++)
        {                
            somaAtual += mat[j][i];
        }

        if (soma != somaAtual)
        {
            return 0;
        }
    }

    somaAtual = 0;

    for (int i = 0; i < 3; i++)
    {
        somaAtual += mat[i][i];
    }

    if (somaAtual != soma)
    {
        return 0;
    }

    for (int i = 0; i < 3; i++)
    {
        somaAtual += mat[3 - i - 1][i]
    }

    if (somaAtual != soma)
    {
        return 0;
    }

    return 1;   
}