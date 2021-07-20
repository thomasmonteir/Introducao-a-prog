#include <stdio.h>

int main (void){


    int a, b;

        scanf("%d %d",&a,&b);

        if(a == b){

            printf("A e B sao iguais.");

        }else if(a > b){

            printf("A eh maior e ");

        }else if(a < b){

            printf("B eh maior e ");

        }

        if(a % 2 == 0, b % 2 == 0){

            printf("PAR.");

        }else if(a % 2 == 1, b % 2 == 1){

            printf("IMPAR.");

        }





    return 0;

}

