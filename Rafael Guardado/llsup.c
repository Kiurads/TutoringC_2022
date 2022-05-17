#include "llsup.h"

void mostraMenu() 
{
    printf("\n");
    printf("Registo de pessoas\n");
    printf("\n");
    printf("1 - Adicionar pessoa\n");
    printf("2 - Mostrar pessoas\n");
    printf("3 - Remover pessoa\n");
    printf("0 - Sair\n");
    printf("\n");
    printf("Escolha: ");
}

pPessoa criaPessoa() 
{
    pPessoa novo;

    novo = malloc(sizeof(Pessoa));

    if (novo == NULL) 
        return NULL;

    printf("Nome: ");
    scanf(" %[^\n]", novo->nome);

    printf("ID: ");
    scanf(" %d", &novo->id);

    printf("Cidade: ");
    scanf(" %[^\n]", novo->cidade);

    return novo;
}

void mostraPessoas(pPessoa lista) 
{
    printf("\n");

    while (lista != NULL)
    {
        printf("Pessoa %d: %s de %s\n", lista->id, lista->nome, lista->cidade);
        lista = lista->prox;
    }

    printf("\n");
}

pPessoa removePessoa(int id, pPessoa lista)
{
    pPessoa atual = lista;
    pPessoa anterior = NULL;

    while (atual != NULL && atual->id != id)
    {
        anterior = atual;
        atual = atual->prox;
    }
    
    if (atual != NULL) //Foi encontrado o elemento
    {
        if (anterior == NULL) //Primeiro elemento da lista
        {
            lista = atual->prox;
        }
        else
        {
            anterior->prox = atual->prox;
        }

        free(atual);
    }

    return lista;
}