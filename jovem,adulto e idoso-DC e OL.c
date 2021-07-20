#include <stdio.h>
#include <math.h>

int main(void){

    int idade;

    printf("digite sua idade:");
    scanf("%d",&idade);

    if(idade> 21 && idade<60){
        printf("você e adulto");
    }else{
        if(idade>60 || idade>60){
            printf("voce e velho");
        }else{
            printf("voce e jovem");
        }
    }
    return 0;

}
