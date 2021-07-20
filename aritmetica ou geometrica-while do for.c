#include <stdio.h>
#include <math.h>

int main(void){


    char c;
    int t1, r, n, an, termo, quant,soma;

    printf("digite 'g' se quiser uma progressão geometrica ou 'a' se quiser uma progressão aritmetica (caractere minusculo): \n");
    scanf("%c", &c);

    printf("digite o primeiro termo da progressao: \n");
    scanf("%d", &t1);

    printf("digite a razao da progressao: \n");
    scanf("%d", &r);

    printf("digite o numero de termos da progressao: \n");
    scanf("%d", &n);

    quant = 0;
    soma = 0;

    if(c == 'a'){

        while(quant < n ){

            termo = t1 + quant * r;

            printf("%d\n",termo);

            quant++;

            an=t1 + (n - 1) * r;

            soma = (n * (t1 + an)) / 2;

        }

     }else if(c == 'g'){

               termo = t1;

               printf("Valor = %d\n",termo);

                    while(quant < n - 1){

                        termo = termo * r ;

                        printf("%d\n",termo);

                        quant++;

                        soma = ((t1*(pow(r,n) - 1))/(r-1));
                }

       }

        printf("o resultado da soma dos termos e : %d",soma);

    return 0;
}


