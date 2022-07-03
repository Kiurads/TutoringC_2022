#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Pessoa Pessoa, *pPessoa;

struct Pessoa 
{
    char nome[100];
    int id;
    char cidade[100];
    pPessoa prox;
};

void mostraMenu();
pPessoa criaPessoa(int id);
pPessoa adicionaPessoa(int id, pPessoa lista);
void mostraPessoas(pPessoa lista);
pPessoa removePessoa(int id, pPessoa lista);