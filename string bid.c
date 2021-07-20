#include <stdio.h>

int main(void){

    char nomes[5][31];

    int i;

    for (i = 0; i < 10; i++){

    fgets(nomes[i], 31, stdin);

    }

    for (i = 0; i < 10; i++){

    printf(nomes[i]);

    }

return 0;
}
