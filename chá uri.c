#include <stdio.h>

    int main(void){

    int t, a, b, c, d, e, z = 0, x = 0, quant;

    scanf("%d",&t);

    scanf("%d %d %d %d %d",&a, &b, &c, &d, &e);

    if(a == t){

        x++;

    }

    if(b == t){

        x++;

    }

    if(c == t){

        x++;

    }

    if(d == t){

        x++;

    }

    if(e == t){

        x++;

    }else{

    x = x;

    }

    printf("%d",x);

    return 0;

}
