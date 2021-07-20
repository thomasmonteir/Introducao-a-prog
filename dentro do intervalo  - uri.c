#include <stdio.h>

int main (void){


    int N, X, Z, W, quant;

    scanf("%d",&N);

    quant = 0;

    Z = 0;

    W = 0;

    while(quant < N){

        scanf("%d",&X);

        quant = quant + 1;

        if(X >= 10 && X <= 20){

            W = W + 1;

        }else{

            Z = Z + 1;


        }
    }

    printf("%d in\n",W);

    printf("%d out\n",Z);

    return 0;

}
