#include <stdio.h>
    //função que faz a conta da media dos valores
    double AdicioneNaMedia(double valor){
    // static utilizado para o número poder ser mudado sem interferencia de fora
    static double j = 0;
    //adicionar +1 ao j sempre que um numero for adicionado
    j++;
    //retornando o resultado de valor dividido pelo j
    return valor / j;

    }

int main(void){
    //variaveis recebendo seus tipos
    int q;

    double a, a1, v;
    //printf pedindo ao usúario que inserisse a quantidade de termos que ele colocará e o q receberá esse valor
    printf("Digite a quantidade de termos que serao inseridos: ");
    scanf("%d",&q);
    //situação que funcionára enquanto n for menor que o q
    for(int n = 0; n < q; n++){
    //sacnf atribuindo valor a variavel a que será o numero atribuido a valor e ira ser somado com seu proximo e divido
        scanf("%lf",&a);
    // o esquema para que ocorra a soma do termo atual com seu antigo
        a = a + a1;
        a1 = a;
    //"chamada" da função
        v = AdicioneNaMedia(a);
    //printf mostrando as medias
        printf("a media e %.2lf\n",v);

    }

    return 0;
}
