/**
 ============================================================================
 Nome      : q3-completarFuncoes.c
 Autor     : lincoln
 Versao    : 1.0
 Copyright : CC BY 4.0
 Descricao : Exercicio para completar com definicoes de funcoes.
 ============================================================================
 */
#include <stdio.h>

/****
* SomaAteN(): Calcula a soma de todos valores de 0 ate n.
*
* Parametros:
*    n (entrada): o valor do numero natural n, ate onde a soma sera feita.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor da soma ate n quando n for natural.
****/

   int SomaAteN(int n){ // função da soma ate n//
        int soma;

        if(n >= 0){ //n sendo um numero natural logo é maior que zero//

            while(n != 0){//enquanto n for diferente de zero ocorrerá o procedimento abaixo //

                soma = soma + n;// soma sera igual a soma mais n//
                n--;//enquanto n for diferente de zero subtrairá 1//
            }

            return soma;

        }else{//se n nao for natural logo sera negativo e retornará -1//

            return -1;
        }

    }


/****
* Fatorial(): Calcula o fatorial de um natural n.
*
* Parametros:
*    n (entrada): o valor do numero natural n.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               -1 (menos 1):   quando o parametro n nao for um natural.
*               valor natural:  valor de n! quando n for natural.
****/

    int Fatorial(int n){ // função do fatorial//
        int i= 1;
        int fat = 1;

        if(n < 0) //se n for menor que zero significa que ele é negativo logo retorna -1//

            return -1;

    else//se nao ele é positivo e fara o fatorial do numero e retornara seu valor//

        while(i != n){

        i++;

        fat = fat * i;
        }
            return fat;

    }



/****
* EhPar(): Indica se um valor inteiro eh par ou impar.
*
* Parametros:
*    x (entrada): o valor de um inteiro x.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando x for par.
*               0 (falso):      quando x for impar.
****/

 int EhPar(int x){ // função para descobrir se x é par ou impar//
    int n;

        if (x %2 == 0) // se o resto da divisão for 0 é divisivel//
            n = 1;
       else
            n = 0;

    return n;

    }

/****
* EhDivisivel(): Indica se um numero eh divisivel por outro.
*
* Parametros:
*    a (entrada): um valor inteiro.
*    b (entrada): um valor inteiro.
*
* Retorno: A funcao retorna um dos seguintes valores:
*               1 (verdadeiro): quando a for divisivel por b.
*               0 (falso):      quando a NAO for divisivel por b.
****/

    int EhDivisivel(int a,int b){ // função para situação de divisibilidade//

        if (a % b == 0) // se a for divisel por b retorna 1 senao retorna 0//

            return 1;

        else

            return 0;

    }


int main(void) {
    int n, soma, i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    soma = SomaAteN(n);
    printf("A soma de 1 ateh N eh: %d\n", soma);

    printf("%d! = %d\n", n, Fatorial(n));
    if (EhPar(n)){
        printf("%d eh par\n", n);
    }else{
        printf("%d eh impar\n", n);
    }

    for (i = 2; i <= 15; i++){
        if (EhDivisivel(n, i)){
            printf("%d eh divisivel por %d\n", n, i);
        }else{
            printf("%d nao eh divisivel por %d\n", n, i);
        }
    }

	return 0;
}
