#include <stdio.h>
#include <string.h>

int main(void){

 char d[101],s[101];
 int r;

 while(scanf("%s %s",d,s)!=EOF){

     r = strcmp(d,s);

    if(r <= 0){
        printf("Resistente\n");
    }else{
        printf("Nao resistente\n");
    }
        r=0;
    }
 return 0;
}
