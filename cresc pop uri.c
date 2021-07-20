#include <stdio.h>

int Anos(int pa,int pb,double g1,double g2){

    int tempo = 0;

    while(pa <= pb){

            pa += (g1 * (pa/100));
            pb += (g2 * (pb/100));
            tempo++;
        }

    return tempo;
}

int main(void){

    unsigned short int t,pa,pb,quant,tempo;

    double g1,g2;

    scanf("%hu",&t);

    for(quant = 1; quant <= t; quant++){

        scanf("%hu %hu %lf %lf",&pa,&pb,&g1,&g2);

        tempo = Anos(pa, pb, g1, g2);

        if(tempo <= 100){

        printf("%hu anos.\n",tempo);

        }else{

        printf("Mais de 1 seculo.\n");

        }
    }

    return 0;
}
