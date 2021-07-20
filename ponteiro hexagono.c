#include <stdio.h>
#include <math.h>

void CalculoHexagono(float l, float *area, float *perimetro){

    *area = (3.0 * pow(l,2) * sqrt(3)) / 2.0;

    *perimetro = 6.0 * l;

}

int main (void){

    float l;
    float *a, *p;

    a = &l;

    scanf("%f", &l);

    CalculoHexagono(l, a, p);

    printf("%f", *a);

    printf("%f", *p);

    return 0;

}
