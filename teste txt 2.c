#include <stdio.h>

int main(void){
    FILE *fp;
    char str[51], *p;

    fp = fopen("arquivo1.txt", "r");
    if (fp == NULL){
        puts("Impossivel abrir arquivo.");
        return 1;
    }else{
        puts("Arquivo aberto.");
    }

    while(1){
        p = fgets(str, 51, fp);
        if (p == NULL){
            break;
        }
        printf(str);
    }


    if (fclose(fp) == EOF){
        puts("Erro ao fechar arquivo.");
    }else{
        puts("Arquivo fechado com sucesso.");
    }

    return 0;
}
