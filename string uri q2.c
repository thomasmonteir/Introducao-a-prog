#include <stdio.h>
#include <string.h>

int main(void){

    int i, q;
    char num[1001];
    char *maior, *menor;


    while(q != 0000){

        scanf("%d",&q);

    for(i = 0;i < q;i++){

        scanf("%s",num[i]);

    }

        *menor = num[0];
        *maior = num[0];

        for(i = 0;i < q;i++){
            if(*menor > num[i]){

                *menor = num[i];
            }

            if(*maior < num[i]){

                *maior = num[i];
            }
        }
        printf("%s\n",*maior);
    }

    return 0;
}
