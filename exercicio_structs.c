#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int numerador;
    int denominador;
    float resultado;
} Fracao;

void calcula(Fracao *v, int dim, int valor) {

}

int main() {
    Fracao v[4];
    calcula(v, 4, 2);

    for (int i = 0; i < 4; i++)
    {
        printf("%d / %d = %f\n", v[i].numerador, v[i].denominador, v[i].resultado);
    }
}