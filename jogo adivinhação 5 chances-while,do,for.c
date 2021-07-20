#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	int palpite, correto, tentativas;

	srand(time(NULL));
	correto = rand() % 100;

	palpite = -1;
	tentativas = 5;

	while (palpite != correto && tentativas >= 1) {

        printf("Adivinhe o numero: ");
        scanf("%d", &palpite);



            if (palpite == correto){

            printf("voce acertou");

            return 1;

            }else if (tentativas == 1){

                printf("voce excedeu o limite de tentativas");

                return 2;

            }else if (palpite < correto){

                puts("Palpite foi baixo!");
                tentativas = tentativas - 1;
                printf("numero de tentativas:%d\n",tentativas);

            }else if (palpite > correto){
                puts("Palpite alto!");
                tentativas = tentativas - 1;
                printf("numero de tentativas:%d\n",tentativas);

            }
	}


	return 0;
}
