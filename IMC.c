#include <stdio.h>
#include <stdlib.h>

int main(void){

    float peso,altura,imc;

    printf("digite seu peso em quilogramas:");
    scanf("%f",&peso);

    printf("digite sua altura em metros:");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    printf("seu imc é:%.2f",imc);

    return 0;



}
