#include <stdio.h>


int main(void){

    int i,n = 1,k = 1,array[1001],j,a = 0;

    while(n != 0 && k != 0){
        a = 0;
        scanf("%d",&n);
        scanf("%d",&k);

        if(n == 0 && k == 0){
            break;
        }

    for(i = 0; i < n; i++){
        // compara se o array[i] é igual a todos os arrays depois dele
        scanf("%d",&array[i]);
        for(j = 1; j < n; j++){
              // só pra evitar comparar array[i] == array[i]
              if(i == j) continue;

              if(array[i] == array[j]){
                  // se entrar aqui, signfica que arrau[i] é igual a array[j]
                  a++;
              }
        }
    }
    printf("%d\n",a);
}


    return 0;
}
