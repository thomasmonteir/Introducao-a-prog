#include <stdio.h>

int main (void){

    int i, a;

    i = 0;

    scanf("%d",&a);

    while(i < a){

        i++;

        if(i % 2 == 1){

        printf("%d",i);

        }


    }


    return 0;


}
