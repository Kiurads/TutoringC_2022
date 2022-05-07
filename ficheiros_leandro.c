#include "includes.h"

int main(int argc, char **argv)
{
    FILE *f;
    int i = 0;
    int maior = 0;
    int menor;
    int linhaMaior;
    int linhaMenor;
    char buffer[1024];

    if ((f = fopen("ficheiro_teste.txt", "r")) == NULL)
    {
        printf("Erro ao abrir o ficheiro");
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), f) != NULL)
    {
        if (i == 0 || strlen(buffer) < menor)
        {
            menor = strlen(buffer);
            linhaMenor = i + 1;
        }
        
        if (strlen(buffer) > maior)
        {
            maior = strlen(buffer);
            linhaMaior = i + 1;
        }
        
        i++;
    }

    fclose(f);

    f = fopen("resultados.txt", "w");
    
    fprintf(f, "Linha maior: %d\n", linhaMaior);
    fprintf(f, "Linha menor: %d\n", linhaMenor);

    fclose(f);
    
    return 0;
}