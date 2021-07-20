#include <stdio.h>
#include <math.h>

    int main(void){

    int a,b,c;

    printf("digite o primeiro valor:");
    scanf("%d",&a);

    printf("digite o segundo valor:");
    scanf("%d",&b);

    printf("digite o terceiro valor:");
    scanf("%d",&c);

    if(a>b){
        printf("a que representa %d é o maior numero dos tres",a);
    }else{
        if(b>c){
            printf("b que representa %d é o maior numero dos tres",b);
    }else{
            printf("c que representa %d é o maior numero dos tres",c);
    }
}

    return 0;

}
