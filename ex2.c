#include <stdio.h>
#include <stdlib.h>

typedef struct {
    struct {
        int dia;
        int mes;
        int ano;
    } registo;
    int c1;
    int c2;
    int c3;
} dados;

int processa(dados *a, int tam, int alvo, int *p) {
    int total = 0;

    for (int i = 0; i < tam; i++)
    {
        if (a[i].registo.dia == alvo)
            total++;

        if (i == 0)
            *p = a[i].c2;

        if (a[i].c2 > *p)
            *p = a[i].c2;
    }
    
    return total;
}

int main(int argc, char **argv) {
    dados a[5] = {{{23,5,2020},1,3,5}, 
                  {{23,5,2021},2,3,50}, 
                  {{23,5,2022},10,30,15}, 
                  {{23,5,2020},4,3,51}, 
                  {{23,5,2019},12,2,5}};

    int x, y; 
    y = processa(a, 5, 23, &x); 
    printf("%d %d\n", x, y); 
}