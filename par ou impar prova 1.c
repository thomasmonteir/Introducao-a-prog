#include <stdio.h>

int main (void){

    //uitlizei o unsigned short para diminuir o uso demem�ria da maquina limitando a entrada ate o numero inteiro 65,365//
    unsigned char a, b;

    //scanf para obter os valores de a e b//
        scanf("%hu %hu", &a, &b);
    // um if dizendo que se a vari�vel a for igual a b a sa�da sera o printf abaixo//
        if(a == b){

            printf("A e B sao iguais.\n");
    // sen�o for tera dois caminhos a se seguir que s�o://
        }else{
    // um if dizendo que se a variavel a for maior que b a s�ida sera o printf "A eh maior e "//
        if(a > b){

            printf("A eh maior e ");
    // e entrar� em outra possibilidade que � para achar se a � positivo ou negativo utilizado o resto da divis�o por 2//
            if(a %2 == 0){
    // se o resto da divis�o por 2 de a for 0 significa que ele � par//
                printf("PAR.\n");

            }else{
    // se for diferente de 0 ee que nesse caso so pode ser 1 ele � impar//
                printf("IMPAR.\n");

            }
    // se a for menor que b a sa�da mostrar� B eh maior e"//
        }else if(a < b){

            printf("B eh maior e ");
    //Temos aqui a mesma situa��o que o a por�m utilizando o resto da divis�o por 2 no b que se for 0 indicar� que ele � par//
            if(b %2 == 0){

                printf("PAR.\n");
    // sen�o o resultado sera diferente de 0 logo impar//

            }else{

                printf("IMPAR.\n");

            }

        }


    }
    //utilizando o return 0 para finalizar o programa//

    return 0;

}
