#include <stdio.h>

int main(void){

    int i,p,x;
    double ar[12][12],soma = 0;
    char t;

    scanf("%d%*c",&p);
    scanf("%c",&t);

    for(i = 0;i < 12;i++){
       for(x = 0;x < 12;x++){

        scanf("%lf",&ar[x][i]);

       }
    }

    for(x = 0;x < 12;x++){
        soma += ar[x][p];
    }

    if(t == 'S'){
        printf("%lf",soma);
    }else{
        printf("%lf",soma/12);
    }

    return 0;
}
