#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int idade;
    char sexo;
} Pessoa;

/*----------------------------------------------------------------
Fazer uma função que preencha uma estrutura do tipo pessoa com dados
introduzidos pelo utilizador e que devolva 1 se a pessoa for maior de de
idade e 0 se for menor. O nome tem que começar por letra maiúscula,
a idade só pode partir de 0 e não pode ultrapassar 130 e o sexo
deve se M, F ou O
*/

int preenchePessoa(Pessoa *pessoa) {
    do
    {
        printf("Nome (começar por letra maiuscula): ");
        scanf(" %[^\n]", &pessoa->nome);
    } while (pessoa->nome[0] < 'A' || pessoa->nome[0] > 'Z');

    do
    {
        printf("Idade (0 - 130): ");
        scanf(" %d", &pessoa->idade);
    } while (pessoa->idade < 0 || pessoa->idade > 130);

    do
    {
        printf("Sexo (M, F ou O): ");
        scanf(" %c", &pessoa->sexo);
    } while (pessoa->sexo != 'M' && pessoa->sexo != 'F' && pessoa->sexo != 'O');
    
    return pessoa->idade >= 18 ? 1 : 0;
}

int main(int argc, char **argv) {
    Pessoa p;

    if (preenchePessoa(&p))
    {
        printf("Maior de idade\n");
    }
    else
    {
        printf("Menor de idade\n");
    }

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Sexo: %c\n", p.sexo);
}