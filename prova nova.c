#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    unsigned short m, n, c;
    // scanf para obter os valores de m,n e c e ser usado a seguir//
    scanf("%hu %hu %hu", &m, &n, &c);
    //if utilizado para caso m seja igual a n a saida mostre o printf e se encerre//
    if(m == n){

        printf("Nada para exibir.\n");

        return 1;
    // nesse else if temos a troca de variaveis caso m seja maior que n esse esquema abaixo faz com que m se transforme em n e n em m;
    }else if (m > n){

        m = m + n;
        n = m - n;
        m = m - n;
    }
    //Aqui temos um for utilizado para funcionar enquanto m for menor ou igual a n e sempre adicionar +1 a m usando o ++//
    for (m = m; m <= n; m++){
        //nesse if mostra que se o resto da divisao por 2 do c for 0 significa que ele � par e entrara no proximo if//
        if (c % 2 == 0){
            // esse if coloca em evidencia o m e mostra que se o resto da sua divis�o for 0 ele sera par e entrar no if abaixo//
            if(m %2 == 0){
                //esse if mostra que se  o resto da divisao por 2 de n for igual ao resto da divis�o por 2 de c ele vai colocar espa�os ate quando m for menor que n//
                if(n %2 == c %2){

                printf("%d%s",m,(m < n ? " " : "\n" ));
                //esse if mostra que quando o resto da divis�o por 2 de n for diferente do resto da divis�o por 2 de c e n for maior que 2 haver� uma subtra��o de 2 no n //
                }else if(n%2 != c%2 && n > 2){

                printf("%d%s",m,(m < n - 2 ? " " : "\n" ));
                //esse if mostra que quando o resto da divis�o por 2 de n for diferente do resto da divis�o por 2 de c e n for maior que 2 haver� uma subtra��o de 2 no n //
                }else if(n%2 != c%2 && n <= 2){

                printf("%d%s",m,(m < n ? " " : "\n" ));

                }

            }

        //aqui temos um else,que  caso o p for impar//
        }else{
            //nesse if mostra que caso o m seja impar segue para o proximo if//
            if(m %2 == 1){
                //nese if mostra que caso haja igualdade nso restos das divis�es por 2 de n e c ele mostrara o numero menores que n com um espa�o e ao final um \n//
                if(n %2 == c %2){

                printf("%d%s",m,(m < n ? " " : "\n" ));
                // aqui temos que caso haja diferen�a e o n seja maior que trez haver� uma subtra��o e mostrara o m maior ou igual que o n//
                }else if(n%2 != c%2 && n > 3){

                printf("%d%s",m,(m <= n - 3 ? " " : "\n" ));
                // aqui temos que haja uma diferen�a entre o resto das divis�es de n e c e que n seja maior ou igual a 3 ele colocar� espa�o nos numero menores ou iguas a n//
                }else if(n%2 != c%2 && n <= 3){

                printf("%d%s",m,(m <= n ? " " : "\n" ));

                }
            }

         }
    }

    return 0;
}
