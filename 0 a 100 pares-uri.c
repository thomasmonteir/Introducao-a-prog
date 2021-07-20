#include <stdio.h>

int main (void){

    int a,b;

    a = 0;
    b = 100;

    while(a <= b){

        a = a + 1;

        if(a%2==0){

        printf("%d\n",a);

        }

    }


    return 0;

}
