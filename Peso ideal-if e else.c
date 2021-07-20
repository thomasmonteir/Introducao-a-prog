#include <stdio.h>
#include <math.h>

int main (void){

    float h,hh,hm;
    char g;

    printf("digite seu genero como 'm' se você for mulher ou como 'h' se for homem:");
    scanf("%c",&g);

    printf("digite sua altura em metros:");
    scanf("%f",&h);

    hh=(72.7*h)-58;
    hm=(62.1*h)-44.7;

    if(g == 'm'){
        printf("seu peso ideal por ser mulher eh:%.2f",hm);

    }else{

        printf("seu peso ideal por ser homem eh:%.2f",hh);
    }

    return 0;

}
