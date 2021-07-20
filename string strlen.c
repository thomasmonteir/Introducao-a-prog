#include <stdio.h>
#include <string.h>

int MeuStrlen(const char *s){
    int t = 0, i ;

    for(i = 0; s[i] != '\0'; i++){
        t++;
    }

    return t;
}

int main(void){
    char nome[21] = "vacina";
    int a, b;

    //printf("Digite o nome (max. 20): ");
    //fgets(nome, 21, stdin);

    printf("Nome: \"%s\"\n", nome);
    printf("Tamanho: %d\n", strlen(nome));

    return 0;
}
