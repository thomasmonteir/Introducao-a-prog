#include <stdio.h>
#include <math.h>

void CalculoHexagono(float l, float *area, float *perimetro){

    *area = (3 * pow(l,2) * sqrt(3)) / 2;

    *perimetro = 6 * l;

}

int main (void){

    float l;
    float area, perimetro;

    scanf("%f", &l);

    CalculoHexagono(l, &area, &perimetro);

    printf("%.3f\n%.3f\n", area, perimetro);

    return 0;

}
