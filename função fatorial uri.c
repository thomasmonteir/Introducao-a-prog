#include <stdio.h>

unsigned long long Fatorial1(int m){

    int i = 0;
    unsigned long long fat1 = 1;

    while(i != m){

        i++;

        fat1 = fat1 * i;

    }


    return fat1;
}

unsigned long long Fatorial2(int n){

    int i2 = 0;
    unsigned long long fat2 = 1;

    while(i2 != n){

        i2++;

        fat2 = fat2 * i2;

    }

    return fat2;

}

int main(void){

    int m,n;

    unsigned long long ftg;

    scanf("%d %d", &m, &n);

    ftg = Fatorial1(m) + Fatorial2(n);

    printf("%llu",ftg);


    return 0;
}
