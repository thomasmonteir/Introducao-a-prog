#include <stdio.h>
#include <math.h>

int main (void){

    int a,b;

    printf("digite o primeiro numero:");
    scanf("%d",&a);

    printf("digite o segundo numero:");
    scanf("%d",&b);

    if(a<=b){
        printf("o numero menor �:%d",a);
    }else{
        printf("o n�mero menor �:%d",b);
    }

    return 0;

}
