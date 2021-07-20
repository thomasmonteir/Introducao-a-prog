#include <stdio.h>

int main(void){

    int N, i = 1, fat = 1;

    scanf("%d",&N);

    while(i != N){

        i++;

        fat = fat * i;

    }

     printf("%d\n",fat);

    return 0;
}

