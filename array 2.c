#include <stdio.h>

int main(void){

    int ar[10], i, soma = 0;

    for(i = 0; i < 10; i++){

        scanf("%d",&ar[i]);

    }

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

    for(i = 0; i < 10;i++){

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
