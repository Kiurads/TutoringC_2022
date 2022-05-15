#include "includes.h"

typedef struct inteiro inteiro, *pinteiro;

struct inteiro {
    int n;

    pinteiro prox;
};

int main(int argc, char **argv) {
    int n;
    pinteiro lista = NULL;

    do
    {
        printf("Escreva um inteiro: ");
        scanf(" %d", &n);

        if (n != -1)
        {
            if (lista == NULL)
            {
                lista = malloc(sizeof(inteiro));

                if (lista == NULL)
                {
                    printf("Erro no malloc\n");
                    return 1;
                }

                lista->n = n;
                lista->prox = NULL;
            }
            else
            {
                //----------------------------------------------------------------
                //ADICIONA ELMENTOS NO FINAL DA LISTA LIGADA
                //----------------------------------------------------------------
                pinteiro aux = lista;

                while (aux->prox != NULL)
                {
                    aux = aux->prox;
                }
                
                aux->prox = malloc(sizeof(inteiro));

                if (aux->prox == NULL)
                {
                    printf("Erro no malloc\n");
                    return 1;
                }

                aux = aux->prox;
                aux->n = n;
                aux->prox = NULL;
            }
        }
    } while (n != -1);

    pinteiro aux = lista;

    while (aux != NULL)
    {
        printf("->%d", aux->n);
        aux = aux->prox;
    }

    printf("->NULL");
}