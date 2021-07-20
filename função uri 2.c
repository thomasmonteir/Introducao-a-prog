#include <stdio.h>

int ValorGolpe1(int a1, int d1, int l1, int b1){

    if(l1 %2 == 1){

        b1 = 0;

    }

    int valorg1 = (a1 + d1)/2 + b1;

    return valorg1;
}

int ValorGolpe2(int a2, int d2, int l2, int b1){

    if(l2 %2 == 1){

        b1 = 0;

    }

    int valorg2 = (a2 + d2)/2 + b1;

    return valorg2;
}

int main(void){

    int i, n, f1,f2;
    int a1, d1, l1, b1;
    int a2, d2, l2;

    scanf("%d",&n);

    for(i = 0; n > i; i++){

    scanf("%d",&b1);

    scanf("%d %d %d",&a1, &d1, &l1);

    f1 = ValorGolpe1(a1, d1, l1, b1);

    scanf("%d %d %d",&a2, &d2, &l2);

    f2 = ValorGolpe2(a2, d2, l2, b1);


        if(f1 > f2){

            printf("Dabriel\n");

        }else if(f2 > f1){

            printf("Guarte\n");

        }else{

            printf("Empate\n");

        }

    }

    return 0;
}
