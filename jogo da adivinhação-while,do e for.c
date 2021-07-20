#include <stdio.h>

int main(void){

	int palpite, correto, tentativas, media;

	correto = 0;
	palpite = 1;
	tentativas = 0;

	while (palpite != correto) {


        scanf("%d", &palpite);

        tentativas = tentativas + 1;

        media = media + ((palpite) / tentativas);


	}

    printf("voce tentou %d vezes ate acertar\n",tentativas);
    printf("%d",media);

	return 0;
}
