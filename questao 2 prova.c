#include <stdio.h>

int main(void){

    // utilizei short que tem limite de entrada de 32,767 positivo ate o mesmo valor negativo para otimizar a memoria da maquina//
    unsigned short terms = 0;

    short li, input, pad = 0, lpad, ispa = 1, pgd = 0, lpgd, ispg = 1;

    //Utilizei um do com um scanf dentro para atribuir os valores ao input ate receber numeros negativos menores que zero//
    do {
        scanf("%hd", &input);
        terms++;
    //Esse if diz mostra como a formação de uma pa funciona e fala que o termo tem que ser maior que 1 e imput sempre positivo
        if (terms > 1 && input >= 0) {
            if (ispa == 1) {
                pad = input - li;

                if (terms == 2) {
                    lpad = pad;
                } else if (lpad != pad) {
                    ispa = 0;
                }else {
                    lpad = pad;
                }
            }
    /*Aqui temos o if para a pg seguindo a mesma ideia da pa e sempre recebendo valores positivos porém com outro esquema utilizando troca de
    variaveis parar que possa haver a divisão e se se manter constante é uma pa*/
            if (ispg == 1) {
                pgd = input / li;

                if (terms == 2) {
                    lpgd = pgd;
                } else if (lpgd != pgd) {
                   ispg = 0;
                }else {
                    lpgd = pgd;
                }
            }
        }

        li = input;
    } while(input > 0);
    //Na parte da saide eu utilizei o pad e o pgd para checar as relações e caso fossem inexistentes ir para o ultimo if e msotrar apenas a sequencia//
    if (ispa) {
        printf("PA com %d termos e razao %hu.\n", terms - 1, pad);
    }

    if (ispg) {
        printf("PG com %d termos e razao %hu.", terms - 1, pgd);
    }

    if (ispa == 0 && ispg == 0) {
        printf("Sequencia com %hu termos.", terms - 1);
    }

    return 0;
}
