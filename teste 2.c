#include <stdio.h>

int main(void){
    FILE *fpIn, *fpOut;
    char str[51], *p;
    int a, b;

    //arquivo de entrada
    fpIn = fopen("aula3006-entrada1.txt", "r");
    if (fpIn == NULL){
        puts("Impossivel abrir arquivo de entrada.");
        return 1;
    }else{
        puts("Arquivo de entrada aberto.");
    }

    //arquivo de saida
    fpOut = fopen("aula3006-saida3.txt", "w");
    if (fpOut == NULL){
        puts("Impossivel abrir arquivo de saida.");
        return 1;
    }else{
        puts("Arquivo de saida aberto.");
    }

    while(1){
        fscanf(fpIn, "%d %d", &a, &b);
        if (feof(fpIn)){
            break;
        }
        fprintf(fpOut, "%d + %d = %d\n", a, b, a+b);
    }


    if (fclose(fpOut) == EOF){
        puts("Erro ao fechar arquivo de saida.");
    }else{
        puts("Arquivo de saida fechado com sucesso.");
    }

    if (fclose(fpIn) == EOF){
        puts("Erro ao fechar arquivo de entrada.");
    }else{
        puts("Arquivo de entrada fechado com sucesso.");
    }

    return 0;
}
