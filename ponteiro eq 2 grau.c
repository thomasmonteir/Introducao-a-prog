#include <stdio.h>
#include <math.h>

int ResolveEquacao2Grau(float a, float b, float c, float *x1, float *x2){

    if(a == 0){

        return -1;
    }

    float d = pow(b,2) - (4 * a * c);

    if(d < 0){

        return -2;

    }

    *x1 = (-b + sqrt(d)) / (2 * a);

    *x2 = (-b - sqrt(d)) / (2 * a);

    return 0;
}

int main(void){

    float a, b , c;

    float x1 , x2;

    int resultado;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    resultado = ResolveEquacao2Grau(a, b, c, &x1, &x2);

    switch (resultado){

    case -1:

        printf("Nao forma equacao\n");
        break;

    case -2:
        printf("delta d negativo\n");
        break;

    case 0:
        printf("x1 = %.2f\nx2 = %.2f\n", x1 , x2);
        break;

    }

    return 0;
}
