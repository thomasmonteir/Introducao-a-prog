#include <stdio.h>

int main(void){

    FILE *fp;
    char str[51], *p;

    fp = fopen("arquivo1.txt", "r");

    if(fp == NULL){
        printf("Impossivel abrir o arquivo\n");
        return 1;
    }else{
        printf("Arquivo aberto com sucesso\n");
    }

    while(1){

       p = fgets(str, 51, fp);
        if (p == NULL){
            break;
        }else{
        printf(str);
        }
    }

    if (fclose(fp) == EOF){
        puts("\nErro ao fechar arquivo.");
    }else{
        puts("\nArquivo fechado com sucesso.");
    }


    return 0;
}
