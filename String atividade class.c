#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <math.h>

#define MAX_DESCRICAO 51

typedef struct {
    char descricao[MAX_DESCRICAO];
    float valor;
    int x;
    int y;
    }tRegistro;

void ApresentaMensagem() {
    printf("Ola, esse programa ...\n");
}

void ApresentaMenu() {
    printf("\n\n*** Opcoes *** \n"
                "\n1 - Cadastra"
                "\n2 - Imprime"
                "\n3 - Distancia a partir de um ponto"
                "\n5 - Sair\n");
}

tRegistro * CadastroRegistro(tRegistro *reg){

    printf("Defina o que eh o tesouro:");
    scanf("%s",reg -> descricao);

    printf("Defina o valor do tesouro:");
    scanf("%f",&reg -> valor);

    printf("Defina a posicao \"x\" do tesouro:");
    scanf("%d",&reg -> x);

    printf("Defina a posicao \"y\" do tesouro:");
    scanf("%d",&reg -> y);

    return reg;
}

void ImprimeRegistro(const tRegistro *reg) {

    printf("Tesouro: %s\n",reg -> descricao);
    printf("Valor: %.2f\n",reg -> valor);
    printf("Posicao x: %d\n",reg -> x);
    printf("Posicao y: %d\n",reg -> y);
}

float Distancia(tRegistro *reg, int x, int y){

    float d;
	int *x1, *y1;
	int i, j;

	x1 = &reg->x;
	y1 = &reg->y;
	j = x - *x1;
	i = y - *y1;

	d = sqrt(pow(j, 2) + pow(i, 2));

    return d;
}

int main(void)
{
    tRegistro reg; //guarda o registro
    int opcao, x, y, d;
    ApresentaMensagem();

    while(1){
        ApresentaMenu();
        scanf("%d", &opcao);

        if (opcao == 5){
            break;
        }


        switch(opcao){
            case 1:

                CadastroRegistro(&reg);
                break;

            case 2:

                ImprimeRegistro(&reg);

                break;
            case 3:

                printf("Digite as coordenadas atuais:");

                scanf("%d %d", &x, &y);

                d = Distancia(&reg, x, y);

                printf("Distancia = %.1f\n",d);

                break;
            default:
                puts("Opcao Invalida\n");
                break;
        }
    }

    puts("Adeus");
    return 0;
}
