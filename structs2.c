#include <stdio.h>
#include <stdlib.h>

#define TAM 3

typedef struct
{
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char name[100];
    char capital[100];
    int pop;
    char continent[100];
} Country;

Country preencheCountry() {
    Country country;

    printf("Nome: ");
    scanf(" %[^\n]", country.name);

    printf("Capital: ");
    scanf(" %[^\n]", country.capital);

    printf("Populacao: ");
    scanf(" %d", &country.pop);

    printf("Continente: ");
    scanf(" %s", country.continent);

    return country;
}

void imprimeCountry(Country country) {
    printf("Nome: %s\n", country.name);
    printf("Capital: %s\n", country.capital);
    printf("Populacao: %d\n", country.pop);
    printf("Continente: %s\n", country.continent);
}

int main(int argc, char **argv) {
    Country countries[TAM];

    for (int i = 0; i < TAM; i++)
    {
        printf("Pais %d:\n", i + 1);
        countries[i] = preencheCountry();
    }
    
    for (int i = 0; i < TAM; i++)
    {
        printf("Pais %d:\n", i + 1);
        imprimeCountry(countries[i]);
    }
}

/*----------------------------------------------------------------
Criar uma estrutura para Country que tenha
    - Nome do país (pode ter espaços)
    - Nome da capital (pode ter espaços)
    - Populção total
    - Continente

Fazer uma função que preencha, com dados introduzidos pelo utilizador, 
uma estrutura Country e que a devolva preenchida

Fazer uma função que imprima na consola os dados de um Country/País

Na função main criar um array de Country/País e, recorrendo à função criada
antes, preecher o array
----------------------------------------------------------------*/