#include <stdio.h>
#include <math.h>

int main(void){

    int a,b,c,d,r1,r2;

    printf("digite o valor de a:");
    scanf("%d",&a);

    printf("digite o valor de b:");
    scanf("%d",&b);

    printf("digite o valor de c:");
    scanf("%d",&c);

    d=b*b-4*a*c;
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);

    if(a==0){
        printf("a=0 isso nao é uma funcao de segundo grau\n");
        return 1;
    }else{
        if(d<0){
            printf("delta eh menor que zero por isso nao possui raizes com numeros reais\n");
            return 2;
        }else{
            if(d==0){
                printf("a equacao possui apenas uma raiz que eh %d\n",r1);
            }else{
                printf("a equacao possuia duas raizes que sao %d e %d\n",r1,r2);
            }
        }
    }

    return 0;

}


