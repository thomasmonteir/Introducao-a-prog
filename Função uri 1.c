#include <stdio.h>
#include <math.h>


int FuncaoRafa (int x, int y){

    int funcaor = pow(3 * x, 2) + pow(y, 2);

    return funcaor;
}

int FuncaoBeto (int x, int y){

    int funcaob = 2 * pow(x, 2) + pow(5 * y, 2);

    return funcaob;
}

int FuncaoCa (int x, int y){

    int funcaoc = -100 * x + pow(y,3);

    return funcaoc;
}

int main(void){

    int x,y,n,i;
    int f1, f2, f3;

    scanf("%d",&n);

    for(i = 0; n > i; i++){

        scanf("%d %d", &x, &y);

        f1 = FuncaoRafa (x,y);
        f2 = FuncaoBeto(x,y);
        f3 = FuncaoCa(x,y);

        if(f1 > f2 && f1 > f3){

            printf("Rafael ganhou\n");

        }else if(f2 > f1 && f2 > f3){

            printf("Beto ganhou\n");

        }else{

            printf("Carlos ganhou\n");

        }

    }

    return 0;
}
