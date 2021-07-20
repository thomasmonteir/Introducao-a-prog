#include <stdio.h>
#include <string.h>

char * MeuStrcpy(char *dest, const char *orig){
    int t = 0, i;

    i = 0;
    while(1){
        dest[i] = orig[i];
        if (orig[i] == '\0')
            break;
        else
            i++;
    }

    return dest;
}

int main(void){
    char nome[21] = "vacina";
    char copia[31] = "copia copia copia copia";
    int a, b;


    printf("Nome: \"%s\"\nCopia: \"%s\"\n", nome, copia);
    strcpy(copia, nome);

    printf("Nome: \"%s\"\nCopia: \"%s\"\n", nome, copia);
    printf("Tamanho copia: %d\n", strlen(strcpy(copia, nome)));

    return 0;
}
