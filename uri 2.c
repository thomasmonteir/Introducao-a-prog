#include <stdio.h>
#include <string.h>
#include <math.h>

#define MAX_POKEMON 151
#define MAX_NOME 1001

int main(void){

	char pokemon[MAX_POKEMON][MAX_NOME], vez[MAX_NOME];

	int i, n, topo = - 1, quant=1;

	scanf("%d", &n);

	while(n--){

		scanf("%s", vez);

		if(topo == -1)

			strcpy(pokemon[++topo], vez);

		else{

			for(i = 0; i <= topo; i++)

				if(!strcmp(pokemon[i],vez))

					break;

			if(i > topo){

				strcpy(pokemon[++topo], vez);

				quant++;
			}
		}
	}
	printf("Falta(m) %d pomekon(s).\n", MAX_POKEMON - quant);

	return 0;
}
