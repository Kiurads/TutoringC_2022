#include "includes.h"

int main(int argc, char **argv)
{
    FILE *f;
    char procura;
    char c;
    int total = 0;

    if ((f = fopen("ficheiro_teste.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o ficheiro\n");
        return 1;
    }

    printf("Insira um caracter: ");
    scanf(" %c", &procura);

    while ((c = fgetc(f)) != EOF) 
    {
        if (c == procura)
        {
            total++;
        }
    }

    fclose(f);

    f = fopen("resultados.txt", "w");
    
    fprintf(f, "O caracter %c aparece %d vezes no ficheiro\n", procura, total);

    fclose(f);
    
    return 0;
}