#include <stdio.h>

int main(void){

    int a1 = 1, a2 = 0, n, quant, add;

    scanf("%d",&n);

    for(quant = 1; quant <= n; quant++){

        add = a1 + a2;

        a1 = a2;

        a2 = add;

        if(quant != n){

            printf("%d ",add);

        }else{

            printf("%d\n",add);

        }


    }



    return 0;

}
