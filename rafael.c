#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(int argc, char **argv) {
    int array[TAM];
    int contador = 0;
    int j;

    for (int i = 0; i < TAM; i++)
    {
        printf("[%d]: ", i);
        scanf("%d", &array[i]);
    }
    
    for (int i = 0; i < TAM; i++)
    {
        for (j = 0; j < TAM; j++)
        {
            if (i != j)
            {
                if (array[i] == array[j])
                {
                    break;
                }
            }
        }

        if (j == TAM)
        {
            contador++;
        }
    }

    printf("Existem [%d] valores unicos", contador);
}