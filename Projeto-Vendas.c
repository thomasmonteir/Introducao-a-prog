#include<stdio.h>
#include<stdlib.h>

int main(void){
    FILE *fp;

    int q,prod;
    float mult;

    fp = fopen("texto.txt", "r"); // read mode

    if (fp == NULL){
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }

    printf("Resumo da compra\n");
    printf("-----\n");
    while(1){
        if(feof(fp)){
            break;
        }

    prod = 0;

    fscanf(fp,"%d %d",&prod, &q);

    if(prod = 1){
        printf("Pao ");
        mult = q * 0.85;
        printf("%.2f\n",mult);

    }else if(prod = 2){
        printf("Manteiga de garrafa ");
        mult = q * 8.5;
        printf("%.2f\n",mult);

    }else if(prod = 3){
        printf("Bolo de choclate ");
        mult = q * 13.40;
        printf("%.2f\n",mult);

    }else if(prod = 4){
        printf("Agua mineral ");
        mult = q * 1.9;
        printf("%.2f\n",mult);

    }else if(prod = 5){
        printf("Ovo ");
        mult = q * 0.45;
        printf("%.2f\n",mult);

    }else if(prod = 6){
        printf("Pao de queijo ");
        mult = q * 0.89;
        printf("%.2f\n",mult);

    }else if(prod = 7){
        printf("Mortadela");
        mult = q * 11.6;
        printf("%.2f\n",mult);

    }else if(prod = 8){
        printf("Leite condensado");
        mult = q * 7.5;
        printf("%.2f\n",mult);

    }else if(prod = 9){
        printf("Pao doce");
        mult = q * 12.75;
        printf("%.2f\n",mult);

    }else if(prod = 10){
        printf("Salsicha");
        mult = q * 1.25;
        printf("%.2f\n",mult);
        }
    }

    fclose(fp);

    return 0;
}
