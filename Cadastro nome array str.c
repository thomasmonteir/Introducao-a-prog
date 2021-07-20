#include <stdio.h>
#include <string.h>

int main(void){

    char nome[15][21];
    char str[21];
    int i;

    for(i = 0; i < 5; i++){

        printf("Digite o nome do aluno #%d ", i + 1);
        fgets(nome[i], 21, stdin);

    }

    for(i = 0; i < 5; i++){

        printf("Nome #%d: %s", i + 1, nome[i]);
    }

    return 0;
}
