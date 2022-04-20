#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv) {
    char str[1024];
    char str2[1024];

    strcpy(str, "ISEC");

    printf("Frase lida[%d]: %s\n", strlen(str), str);

    strcat(str, "ABC");

    printf("Frase alterada[%d]: %s\n", strlen(str), str);  
    
}