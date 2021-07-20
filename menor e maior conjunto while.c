#include <stdio.h>

int main(void){

  int a, ma, me;

    scanf("%d", &a);

    ma = a;
    me = a;

    while (a != 0){
        if(a > ma){
            ma = a;
        }else if(a < me){
            me = a;
        }
        scanf("%d", &a);
    }

    printf("maior: %d\n", ma);
    printf("menor: %d\n", me);



    return 0;
}
