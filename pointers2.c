#include <stdio.h>
#include <stdlib.h>

void funcao(int *a) {
    *a = 5;
}

void soma(int a, int b, int *res) {
    res = a + b;
}

int main(int argc, char **argv) {
    int a, b, res;

    printf("Valor de a: ");
    scanf("%d", &a);
    printf("Valor de b: ");
    scanf("%d", &b);

    soma(a, b, &res);

    printf("%d + %d = %d\n", a, b, res);
}

/*================================================================
Uma função "soma" que recebe:
    - 1 inteiro a
    - 1 inteiro b
    - 1 ponteiro para inteiro res
Guarda no ponteiro res o resultado da soma de a + b
*/