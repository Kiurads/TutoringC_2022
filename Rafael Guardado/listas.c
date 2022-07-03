#include <stdio.h>
#include <stdlib.h>

struct numero {
    int n;
    struct numero *prox;
};

int main(int argc, char **argv) {
    struct numero *p = NULL;
    int x;

    do {
        struct numero *novo = NULL;

        printf("Numero: ");
        scanf("%d", &x);

        novo = malloc(sizeof(struct numero)); 

        if (novo == NULL) {
            printf("Erro na alocacao de memoria\n");
            return 1;
        }

        novo->n = x;
        novo->prox = NULL;

        //1 Colocar novos elementos no inicio da lista
        /*
        novo->prox = p;
        p = novo;
        */
        //2 Colocar novos elementos no meio da lista
        
        if (p == NULL) {
            p = novo;
        } else {
            struct numero *atual = p;
            struct numero *anterior = NULL;

            while (atual->prox != NULL && atual->n <= novo->n) {
                anterior = atual;
                atual = atual->prox;
            }

            if (anterior == NULL) {
                if (atual->n > novo->n) {
                    novo->prox = p;
                    p = novo;
                } else {
                    atual->prox = novo;
                }
            } else {
                if (atual->n <= novo->n) {
                    atual->prox = novo;
                } else {
                    anterior->prox = novo;
                    novo->prox = atual;
                }
            }
        }
        
        //3 Colocar novos elementos no fim da lista
        /*
        if (p == NULL) {
            p = novo;
        } else {
            struct numero *aux = p;

            while (aux->prox != NULL) {
                aux = aux->prox;
            }

            aux->prox = novo;
        }
        */
    } while (x != 0);

    struct numero *atual = p;
    struct numero *anterior = NULL;    

    while (atual != NULL) {
        printf("%d -> ", atual->n);
        atual = atual->prox;
    }

    printf("NULL");

    while (atual != NULL) {
        anterior = atual;
        atual = atual->prox;

        free(anterior);
    }

    return 0;
}