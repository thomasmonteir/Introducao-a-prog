#include <stdio.h>

int main(void){

    FILE *fpIn, *fpOut;
    char str[51], *p;
    int a, b;

    fpIn = fopen("arquivo1.txt", "r");

    if(fpIn == NULL){
        printf("Impossivel abrir o arquivo de entrada\n");
        return 1;
    }else{
        printf("Arquivo de entrada aberto com sucesso\n");
    }

    fpOut = fopen("arquivo1-saida.txt", "w");

    if(fpOut == NULL){
        printf("Impossivel abrir o arquivo de saida\n");
        return 1;
    }else{
        printf("Arquivo de saida aberto com sucesso\n");
    }

    while(1){

       fscanf(fpIn, "%d %d", &a, &b);
       if(feof(fpIn)){
        break;
       }

       fprintf(fpOut,"%d + %d = %d\n", a, b, a + b);
    }

    if (fclose(fpOut) == EOF){
        puts("Erro ao fechar arquivo de saida.\n");
    }else{
        puts("Arquivo de saida fechado com sucesso.\n");
    }

    if (fclose(fpIn) == EOF){
        puts("Erro ao fechar arquivo de entrada.\n");
    }else{
        puts("Arquivo de entrada fechado com sucesso.\n");
    }



    return 0;
}
