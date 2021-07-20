/*
============================================================================
 */
#include <stdio.h>

/****
* Media(): Calcula a media de dois valores.
*
* Parametros:
*    valor1 (entrada): o primeiro valor.
*    valor2 (entrada): o segundo valor.
*
* Retorno: retorna sempre a media dos valores recebidos.
****/
float Media(float valor1, float valor2){
    float soma = valor1 + valor2;

    return soma / 2;
}

/****
* Situacao(): Indica a situacao de um aluno de acordo com a media.
*
* Parametros:
*    media (entrada): a media do aluno.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 - quando media maior ou igual a 7 (aprovado).
*               2 - quando media menor do que 7 e maior ou igual
*                   a 5 (recuperacao).
*               3 - quando a media eh menor do que 5 (reprovado).
****/

int main(void){
    float nota1, nota2; /* os valores a serem lidos do usuario */
    float media;        /* para calcular e guardar o resultado */
    int situacao;       /* para armazenar a situacao do aluno  */

    int Situacao(float media){ // função da situação colocando a media//

        if (media >= 7) // se media for maior ou igual a 7 situacao recebe 1//
            situacao = 1;
        else if(7 > media && media >= 5)// se media for menor que 7 ou maior e igual a 5 situcao recebe 2//
            situacao = 2;
        else
            situacao = 3;// se nao se enquadrar em nenhuma das duas situacao recebe 3//


    return situacao;

    }

    /* leitura dos valores */
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    /* calular a media e situacao a partir da chamada da funcao */
    media = Media(nota1, nota2);
    situacao = Situacao(media);

    /* imprime o resultado */
    printf("A media das notas %.1f e %.1f eh %.1f\n", nota1, nota2, media);
    printf("A situacao do aluno eh: ");
    switch(situacao){
        case 1:
            puts("Aprovado.");
            break;
        case 2:
            puts("Recuperacao.");
            break;
        case 3:
            puts("Reprovado.");
    }

    return 0;
}
