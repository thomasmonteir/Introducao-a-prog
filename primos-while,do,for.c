#include <stdio.h>

int main (void){

    int  a, result = 0, quant = 1, x, z;

    unsigned long long nn;

    scanf("%d",&x);

    while(quant <= x){

    quant++;

    scanf("%llu", &nn);

    result = 0;

        for(a = 2; a <= nn / 2; a++){

            if (nn % a == 0) {

            result++;

        }

      }
            if (result == 0){

                z = 1;

            }else{

                z = 2;


            }

            switch(z){

            case 1:


                printf("Prime\n");

                break;

            case 2:

                printf("Not Prime\n");

                break;

        }

    }



    return 0;
}

