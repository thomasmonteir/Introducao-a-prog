#include <stdio.h>

int main (void){

	int senha, correto;

	correto = 2002;

	while (senha != correto) {

        scanf("%d", &senha);

        if(senha != correto){

            printf("Senha Invalida\n");

        }

	}

    printf("Acesso Permitido\n");


    return 0;

}
