#include <stdio.h>

int main(void){

    int n = 1, f = 1, p, i, r;
    int ar[1000];

    while(n != 0 && f!= 0){

        scanf("%d",&n);
        scanf("%d",&f);

        if(n == 0 && f ==0){
            break;
        }

        for(i = 0;i < n; i++){

            ar[i] = 0;
        }

        for(i = 0;i < n;i++){

            scanf("%d",&p);
            ar[p - 1]++;
        }

        r = 0;

        for(i = 0;i < n;i++){

            if(ar[i] >= f){

                r++;
            }
        }

        printf("%d\n",r);
    }

    return 0;
}
