#include <stdio.h>
#include <stdlib.h>

void printEspiral(int dim, int mat[][dim]) {
    int i, j;
    int lSup, lInf, cSup, cInf;

    cInf = lInf = 0;

    cSup = lSup = dim;

    do {
        i = lInf;

        for (j = cInf; j < cSup; j++) {
            printf("%d ", mat[i][j]);
        }
        
        lInf++;
        i++;

        for (j = j - 1; i < lSup; i++) {
            printf("%d ", mat[i][j]);
        }

        cSup--;
        j--;

        for (i = i - 1; j >= cInf; j--) {
            printf("%d ", mat[i][j]);
        }

        lSup--;
        i--;

        for (j = j + 1; i >= lInf; i--) {
            printf("%d ", mat[i][j]);
        }

        cInf++;
    } while (lInf < lSup);
}

int main(int argc, char **argv) {
    int mat[5][5];
    int v = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = v++;

            printf("[%d] ", mat[i][j]);
        }
        printf("\n");
    }

    printEspiral(5, mat);
    
}