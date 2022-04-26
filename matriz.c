#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define LIN 3
#define COL 4

int main(int argc, char **argv) {
    int matriz[LIN][COL];

    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            matriz[i][j] = rand() % 100 + 1;
        }
    }
        
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {   
            printf("[%d]", matriz[i][j]);
        }

        printf("\n");
    }
}

/*
Fazer as seguintes funções:

1. Uma função que receba uma matriz bidimensional de inteiros e as suas dimensões
   e que preencha essa mesma matriz com valores aleatorios entre 1 e 100

   srand(time(NULL)); -> Inicialização do gerador aleatório
   rand() % 100 + 1; -> Valor aleatorio entre 1 e 100

2. Uma função que imprima uma matriz bidimensional de inteiros na consola. Tem que
   receber a matriz e as suas dimensões

3. Uma função que devolva a média dos valores de uma matriz bidimensional. Terá que
   receber a matriz e as dimensões

4. Uma função que receba uma matriz bidimensional, um array com tamanho igual ao numero
   de linhas, um array com tamanho igual ao numero de colunas e as dimensoes da matriz.
   No final os arrays devem ficar preenchidos com a média de cada linha e cada coluna
*/