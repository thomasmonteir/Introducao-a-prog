#include <stdio.h>
#include <stdlib.h>

int main (void){

    float altura,base,rendimento,litros;

    printf("digite a altura da parede em metros:");
    scanf("%f",&altura);

    printf("digite a base da parede em metros:");
    scanf("%f",&base);

    printf("digite o rendimento da lata em metros quadrados por litro:");
    scanf("%f",&rendimento);

    printf("digite o volume da lata em litros:");
    scanf("%f",&litros);

    float area= altura*base;
    float quant=(area/rendimento)/litros;

    printf("a quantidade de latas necessária(s) é(são):%.1f",quant);



    return 0;



}
