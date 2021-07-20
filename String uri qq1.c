#include <stdio.h>
#include <string.h>

int main(void){

    int q;
    char str[23];

    scanf("%d ", &q);

    while (q--) {
        scanf("%s", str);
        if (strlen(str) == 3 && str[0] == 'O' && str[1] == 'B'){
            printf("OBI");
        }else if (strlen(str) == 3 && str[0] == 'U' && str[1] == 'R'){
            printf("URI");
        }else {
            printf("%s", str);
        }
        if (q){
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}
