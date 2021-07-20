#include <stdio.h>
#include<stdbool.h>

float MediaArray(int ar[],int q){

    static float soma;
    int i;

    for(i = 0;i < q; i++){

        soma += ar[i];

    }

    return soma/q;
}

bool EmArray(int ar[], int n, int q){
    int i;
    bool t;

    for(i = 0;i < q; i++){

        if(n == ar[0] || n == ar[1] || n == ar[2] || n == ar[3] || n == ar[4]|| n == ar[5] || n == ar[6] || n == ar[7] || n == ar[8] || n == ar[9]){

            t = true;
        }else{

            t = false;
        }
      }

    return t;
}

int MaximoValorArray(int ar[],int q){

    int i;
    int maior = 0;

    for(i = 0; i < q; i++){

       maior = ar[0];

        if(ar[i] > maior){

            maior = ar[i];
        }
      }

    return maior;
}

int main(void){

    int ar[10], i, soma = 0,n,maior;
    float media;
    bool a;
    bool b;

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

    printf("#Elementos impares: \n");

    for(i = 0; i < 10;i++){

        if(ar[i] %2 == 1){

            printf("%d\n",ar[i]);
        }
    }

    for(i = 0; i < 10;i++){

      soma += ar[i];

    }

    printf("#Soma dos termos: \n");

    printf("%d\n",soma);

    printf("#Media dos termos : \n");

    media = MediaArray(ar,i);

    printf("%.2f\n",media);

    printf("Digite um numero e veja se ele pertence ao conjunto: \n");
    scanf("%d",&n);

    a = EmArray(ar,n,i);

    if(a == true){

        printf("O elemento existe no conjunto\n");

    }else{

        printf("O elemento nao existe no conjunto\n");
    }

    printf("#Maior numero: \n");

    maior = MaximoValorArray(ar,i);

    printf("%d\n",maior);

    return 0;
}
