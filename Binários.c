#include <stdio.h>

int main(void){

    FILE *fp;
    char linha[10];
    int i;

    fp = fopen("saida", "w");

    if(fp == NULL){
        printf("Nao conseguiu abrir o arquivo");
        return 1;
    }

    for(i = 0;i <= 10;i++){

        fprintf(fp, "%d\n",i);
    }

    fclose(fp);

    return 0;
}
