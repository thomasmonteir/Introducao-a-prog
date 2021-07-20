#include <stdio.h>

int main (void){

    int T, R1, R2, R3, quant;

    T = -1;
    quant = 0;

    scanf("%d",&T);

    while (quant < T ){

        scanf("%d",&R1);

        scanf("%d",&R2);

        R3 = R1 + R2;

        quant = quant + 1;

        printf("%d\n",R3);
    }

    return 0;

}
