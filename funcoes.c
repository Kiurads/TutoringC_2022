#include <stdio.h>
#include <stdlib.h>
#include <time.h>

float media(int n, int array[]) {
    float soma = 0.0;

    for (int i = 0; i < n; i++)
    {
        soma += array[i];
    }
    
    return soma / n;
}

void preencheArray(int n, int *array) {
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 1000 + 1;
    }
}

void imprimeArray(int n, int array[]) {
    for (int i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }

    printf("\n");
}

void parImpar(int n, int origem[], int destino[]) {
    for (int i = 0; i < n; i++)
    {
        if (origem[i] % 2 == 0)
            destino[i] = 0;
        else
            destino[i] = 1;
    }
}

int main() {
    srand(time(NULL));

    int a[10], binario[10];

    preencheArray(10, a);

    parImpar(10, a, binario);

    imprimeArray(10, a);
    imprimeArray(10, binario);

    printf("Media dos valores = %.2f\n", media(10, a)); 
}