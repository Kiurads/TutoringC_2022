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

pPessoa criaPessoa(int id) 
{
    pPessoa novo;

    novo = malloc(sizeof(Pessoa));

    if (novo == NULL) 
        return NULL;

    printf("Nome: ");
    scanf(" %[^\n]", novo->nome);

    printf("Cidade: ");
    scanf(" %[^\n]", novo->cidade);

    novo->id = id;

    return novo;
}

pPessoa adicionaPessoa(int id, pPessoa lista)
{
    pPessoa proximo, anterior, novo;

    proximo = lista;
    anterior = NULL;
    novo = NULL;

    while (proximo != NULL && proximo->id < id)
    {
        anterior = proximo;
        proximo = proximo->prox;
    }

    if (anterior != NULL)
    {
        if (anterior->id < id)
        {
            if (proximo == NULL || proximo->id > id)
            {
                novo = criaPessoa(id);

                if (novo == NULL)
                {
                    printf("Erro ao criar nova pessoa\n");
                    return lista;
                }

                novo->prox = proximo;
                anterior->prox = novo;   
            }
        }
    }
    else
    {
        if (proximo == NULL || proximo->id > id)
        {
            novo = criaPessoa(id);

            if (novo == NULL)
            {
                printf("Erro ao criar nova pessoa\n");
                return lista;
            }

            novo->prox = lista;
            lista = novo;
        }
    }

    if (novo == NULL)
        printf("ID repetido\n");
    
    return lista;    
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