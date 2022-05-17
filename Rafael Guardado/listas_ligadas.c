#include "llsup.h"

int main(int argc, char **argv) 
{
    pPessoa lista = NULL;
    pPessoa aux;
    int input, id;

    do
    {
        mostraMenu();
        scanf(" %d", &input);

        switch (input) {
            case 1:
                aux = criaPessoa();

                if (aux == NULL)
                {
                    printf("Erro ao criar uma nova pessoa\n");
                    return 1;
                }
                
                aux->prox = lista;
                lista = aux;

                break;

            case 2:
                mostraPessoas(lista);
                break;

            case 3:
                printf("ID a remover: ");
                scanf("%d", &id);

                lista = removePessoa(id, lista);
                
                break;
        }
    } while (input != 0);

    while (lista != NULL)
    {
        pPessoa aux = lista;
        lista = lista->prox;
        free(aux);
    }

    return 0;
}