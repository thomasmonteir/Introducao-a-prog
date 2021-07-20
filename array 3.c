#include <stdio.h>

float MediaArray(int soma){

    return soma / 10.0;
}



int main(void){

    int ar[10], i, soma = 0;
    float media;

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

    printf("#media dos termos : \n");

    media = MediaArray(soma);

    printf("%.2f\n",media);

    return 0;
}
