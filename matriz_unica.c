#include <stdio.h>
#include <stdlib.h>

int verificaMatriz(int nLin, int nCol, int mat[][nCol]) {
    for (int i = 0; i < nLin; i++)
    {
        for (int j = 0; j < nCol; j++)
        {
            for (int k = i; k < nLin; k++)
            {
                for (int l = j; l < nCol; l++)
                {
                    if (mat[i][j] == mat[k][l] && i != k && j != l)
                    {
                        return 0;
                    }
                    
                }
            }
        }
    }

    return 1;    
}

int main(int argc, char **argv) {
    int mat[3][3] = {{9, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    if (verificaMatriz(3, 3, mat))
    {
        printf("A matriz nao tem elementos repetidos\n");
    }
    else
    {
        printf("Ã matriz tem elementos repetidos\n");
    }
    
    return 0;
}