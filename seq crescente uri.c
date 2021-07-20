#include <stdio.h>

int main (void){


    int a,i;

    scanf("%d",&a);

    while(a != 0){

        for(i=1; i <= a; i++){

            printf("%d",i);

        }

        scanf("%d",a);
    }

    return 0;

}
