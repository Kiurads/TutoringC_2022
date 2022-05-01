#include <stdio.h>
#include <stdlib.h>

void printMatriz(int dim, int mat[][dim]) {
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            printf("[%d]", mat[i][j]);
        }
        printf("\n");
    }
}

void organizaMatriz(int dim, int mat[][dim]) {
    for (int i = 0; i < dim - 1; i++) {
        int troca = 0;

        for (int j = 0; j < dim; j++) {
            if (mat[i][j] < mat[i + 1][j])
                break;

            if (mat[i][j] > mat[i + 1][j]) {
                troca = 1;

                break;
            }
        }

        if (troca) {
            for (int j = 0; j < dim; j++) {
                int temp = mat[i][j];
                mat[i][j] = mat[i + 1][j];
                mat[i + 1][j] = temp;
            }

            if (i != 0)
                i -= 2;
        }
    }
}

int main(int argc, char **argv) {
    int mat[4][4] = {{1, 4, 2, 7}, {0, 0, 4, 1}, {1, 0, 0, 2}, {4, 7, 2, 5}};

    organizaMatriz(4, mat);

    printMatriz(4, mat);
}