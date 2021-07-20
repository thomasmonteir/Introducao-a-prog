#include <stdio.h>

int main (void){

    //uitlizei o unsigned short para diminuir o uso dememória da maquina limitando a entrada ate o numero inteiro 65,365//
    unsigned char a, b;

    //scanf para obter os valores de a e b//
        scanf("%hu %hu", &a, &b);
    // um if dizendo que se a variável a for igual a b a saída sera o printf abaixo//
        if(a == b){

            printf("A e B sao iguais.\n");
    // senão for tera dois caminhos a se seguir que são://
        }else{
    // um if dizendo que se a variavel a for maior que b a sáida sera o printf "A eh maior e "//
        if(a > b){

            printf("A eh maior e ");
    // e entrará em outra possibilidade que é para achar se a é positivo ou negativo utilizado o resto da divisão por 2//
            if(a %2 == 0){
    // se o resto da divisão por 2 de a for 0 significa que ele é par//
                printf("PAR.\n");

            }else{
    // se for diferente de 0 ee que nesse caso so pode ser 1 ele é impar//
                printf("IMPAR.\n");

            }
    // se a for menor que b a saída mostrará B eh maior e"//
        }else if(a < b){

            printf("B eh maior e ");
    //Temos aqui a mesma situação que o a porém utilizando o resto da divisão por 2 no b que se for 0 indicará que ele é par//
            if(b %2 == 0){

                printf("PAR.\n");
    // senão o resultado sera diferente de 0 logo impar//

            }else{

                printf("IMPAR.\n");

            }

        }


    }
    //utilizando o return 0 para finalizar o programa//

    return 0;

}
