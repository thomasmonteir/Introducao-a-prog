#include <stdio.h>

int main(void){

    int N, i = 0;

    scanf("%d",&N);

    while(i != N){

        i++;

        if(N % i == 0){

            printf("%d\n",i);

        }

    }

    return 0;
}
