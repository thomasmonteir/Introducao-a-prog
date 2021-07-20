#include <stdio.h>

int main (void){


    unsigned long long int N, i = 0;

    scanf("%llu\n",&N);

    while(N != 0){

        do{

            i++;

            printf("%llu ",i);

            if(i + 1 == N){

                printf("%llu",i + 1);

            }

            }while(i + 1 < N);

            i = 0;

            scanf("%llu\n",&N);

        }

    return 0;

}
