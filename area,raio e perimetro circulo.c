#include <stdio.h>
#include <stdlib.h>

int main(void){


    float diametro,raio,area,perimetro;

    printf("digite o diametro do circulo:");
    scanf("%f",&diametro):

    raio=diametro/2;
    printf("o raio desse circulo é: %.1f\n",raio);

    area=3.14*raio*raio;
    printf("a area desse circulo é: %.1f\n",area);

    perimetro=2*3.14*raio;
    printf("o perimetro desse circulo é:%.2f\n",perimetro);


    return 0;

}
