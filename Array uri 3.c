#include <stdio.h>

int main(void){

    unsigned short n = 1, m = 1, i, cont, p;
    unsigned short ar[10000];

    while(1){

        scanf("%hu",&n);
        scanf("%hu",&m);

        if(n == 0 && m ==0){
            break;
        }
        for (i = 0; i < n; i++){
            ar[i] = 0;
        }

        for(i = 0;i < m; i++){
            scanf("%hu", &p);
            ar[p-1]++;
        }
        cont = 0;
        for(i = 0; i < n; i++){
            if(ar[i] > 1){
                cont++;
            }
        }
        printf("%hu\n", cont);
    }

    return 0;
}
