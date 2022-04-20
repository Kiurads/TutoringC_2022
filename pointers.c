#include <stdio.h>
#include <stdlib.h>

int somaArray(int tam, int *array) {
    int soma = 0;

    for (int i = 0; i < tam; i++) {
        array[i] += i;

        soma += *(array + i);
    }

    return soma; 
}

void imprimeArray(int n, int *array) {
    for (int i = 0; i < n; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    imprimeArray(5, a);

    printf("%d\n", somaArray(5, a));

    imprimeArray(5, a);
}

/*
Fazer uma função que receba dois valores inteiros(a e b) 
e duas referências para inteiros (soma e sub) que
guardem, respetivamente a soma (a + b) e a subtração (a - b) 
destes valores
*/