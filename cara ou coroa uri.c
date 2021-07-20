#include <stdio.h>

int main(void){

    int N, I=1, QUANT, X, Y;

    while(1){

        X = 0;
        Y = 0;


        scanf("%d",&N);

        if(N == 0){

            break;
        }

        for(QUANT = 1; QUANT <= N; QUANT++){

            scanf("%d",&I);

            I = (I == 0) ? (X++) : (Y++);

        }

        printf("Mary won %d times and John won %d times\n",X,Y);
    }

    return 0;

}
