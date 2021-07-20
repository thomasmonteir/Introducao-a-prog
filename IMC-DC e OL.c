#include <stdio.h>
#include <math.h>

int main (void){

    float peso,altura,imc;

    printf("digite seu peso em quilogramas:");
    scanf("%f",&peso);

    printf("digite sua altura em metros:");
    scanf("%f",&altura);

    imc=peso/(altura*altura);

    if(imc<=18.5){
        printf("seu peso esta abaixo");
    }else{
        if(imc>18.5 && imc <=25){
            printf("seu peso esta normal");
        }else{
            if(imc>25 && imc<=30){
                printf("seu peso se enquadra em sobrepeso");
            }else{
                    printf("voce esta obeso");

            }
        }
    }

    return 0;


}
