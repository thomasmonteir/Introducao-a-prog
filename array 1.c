#include <stdio.h>

int main(void){

    int ar[9], i, soma = 0,im;

    ar[0] = 10;
    ar[1] = 20;
    ar[2] = 30;
    ar[3] = 40;
    ar[4] = 50;
    ar[5] = 60;
    ar[6] = 70;
    ar[7] = 80;
    ar[8] = 90;
    ar[9] = 100;

    printf("#Numeros crescentes: \n");

    for(i = 0; i < 10; i++){

        printf("%d\n",ar[i]);
    }

    printf("#Numeros decrescentes: \n");

    for(i = 9; i >= 0;i--){

        printf("%d\n",ar[i]);
    }

    printf("#Elemento na quinta posicao: \n");

    printf("%d\n",ar[4]);

    printf("#elementos impares: \n");

    for( i = 0; i < 10; i++){

        if(ar[i] %2 == 1){

            printf("%d\n",ar[i]);
        }
    }

    for(i = 0; i < 10;i++){

      soma += ar[i];

    }

    printf("#soma dos termos: \n");

    printf("%d\n",soma);

    return 0;
}
