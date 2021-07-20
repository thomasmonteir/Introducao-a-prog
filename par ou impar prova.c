#include <stdio.h>

int main(void){

    int m, n, p,quant;

    scanf("%d %d %d",&m,&n,&p);

    if(m == n){

        printf("Nada pra exibir.");
        return 1;

    }


    for(m = m;m <= n;m++){

    if(p %2 == 0){

        if(m %2 == 0){

            if(m == n){

                printf("e %d.",m);

            }else if(m <= n){

                quant++;

                printf("%d%s ",m,(m <= n - quant ? "," : ""));

            }

        }

    }else if(p %2 == 1){

            if(m %2 == 1){

                   if(m + 1 == n){

                printf("e %d.",m);

            }else if(m < n){

                quant = quant + 1;

                printf("%d%s ",m,(m < n - quant  ? "," : ""));

            }

        }

    }


    }


    return 0;

}
