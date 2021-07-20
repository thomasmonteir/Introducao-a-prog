#include <stdio.h>
#include <string.h>

int main(void){

    char str1[21] = "vacina";
    char *str2 = "propina";

    strcpy(str2,str1);

    printf("quero %s",str2);

    return 0;
}
