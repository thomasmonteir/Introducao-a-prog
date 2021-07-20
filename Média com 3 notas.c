#include <stdio.h>
#include <stdlib.h>

int main(void){

    float nota1,nota2,nota3;
    printf("digite a primeira nota:");
    scanf("%f",&nota1);

    printf("digite a segunda nota:");
    scanf("%f",&nota2);

    printf("digite a terceira nota:");
    scanf("%f",&nota3);

    float media = (nota1+nota2+nota3)/3;

    printf("a sua média é:%f",media);


    return 0;
}
