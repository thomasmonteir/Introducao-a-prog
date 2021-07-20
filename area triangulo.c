#include <stdio.h>
#include <stdlib.h>

int main(void){


    int base,altura;
    float area;

    printf("digite a base do triangulo:");
    scanf("%d",&base);

    printf("digite a altura do triangulo:");
    scanf("%d",&altura);

    area=(base*altura)/2.0;

    printf("a area do triangulo é %.2f",area);


    return 0;

}
