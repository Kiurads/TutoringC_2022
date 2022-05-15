#include "../includes.h"

int **criaMatriz(int nLinhas, int nColunas)
{
    int **mat;

    mat = malloc(sizeof(int*) * nLinhas);

    if (mat == NULL)
    {
        return NULL;
    }
    

    for (int i = 0; i < nLinhas; i++)
    {
        mat[i] = malloc(sizeof(int) * nColunas);

        if (mat[i] == NULL)
        {
            return NULL;
        }
        
    }

    return mat;    
}

void preencheArray(int *array, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        array[i] = i;
    }
}

void imprimeArray(int *array, int tam)
{
    for (int i = 0; i < tam; i++)
    {
        printf("[%d]", array[i]);
    }

    printf("\n");
}

int main(int argc, char **argv) 
{
    int **v;
    int nLinhas = 5;
    int nColunas = 6;

    v = criaMatriz(nLinhas, nColunas);

    if (v == NULL)
    {
        printf("Erro na alocacao de memoria\n");
        return 1;
    }

    for (int i = 0; i < nLinhas; i++)
    {  
        preencheArray(v[i], nColunas);
        imprimeArray(v[i], nColunas);
    }
}