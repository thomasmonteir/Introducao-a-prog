#include <stdio.h>

unsigned long long FibN(int x){

    unsigned long long a1 = 1, a2 = 0, i2, add;

        for(i2 = 0; x > i2; i2++){

            add = a1 + a2;

            a1 = a2;

            a2 = add;
        }

        if(x == 0){

            add = 0;
        }

        return add;
}

int main(void){

    int i, i2, n, x;
    unsigned long long ft;

    scanf("%d", &n);

    for(i = 0; n > i; i++){

        scanf("%d", &x);

        ft = FibN(x);

        printf("Fib(%d) = %llu\n", x, ft);
    }

    return 0;

}
