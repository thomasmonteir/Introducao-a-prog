#include <stdio.h>

int main (void){


    unsigned long long N, X, i, quant;

    scanf("%u",&N);

    for(quant = 0; N > quant; quant++){

        scanf("%u",&X);

        for(i =0; i < X; i++){

        if(X % i == 0){

            printf("%u",i);

            }

        }
    }


    return 0;

}
