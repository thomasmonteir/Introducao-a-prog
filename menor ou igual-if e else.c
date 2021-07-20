#include <stdio.h>
#include <math.h>

int main (void){

    int a,b;

    printf("digite o primeiro numero:");
    scanf("%d",&a);

    printf("digite o segundo numero:");
    scanf("%d",&b);

    if(a==b){
        printf("%d e %d sao iguais",a,b);
    }else{
        if(a>b){
            printf("a que eh %d eh maior que b que eh %d",a,b);
        }else{
            printf("b que eh %d eh maior que a que eh %d",b,a);
        }
    }

    return 0;


}
