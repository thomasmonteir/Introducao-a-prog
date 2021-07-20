#include <stdio.h>
#include <math.h>

    //fun��o Delta usada pra produzir um valor pra delta e ser usado na forma de bhaskara a seguir//
    int Delta (int a, int b, int c){;

    float delta;

    delta = pow(b,2) - (4*a*c);

    return delta;
    }
    //fun��o RaizX1 usada pra produzir um valor pra x1 que � o primeiro valor da fun��o//
    float RaizX1(int a,int b,float Delta){

    float raiz1;
    raiz1 = (-(b*1.0) + sqrt(Delta)) / (2 * a*1.0);

    return raiz1;
    }
    //fun��o RaizX2 usada pra produzir um valor pra x2 que � o segundo valor da fun��o//
    float RaizX2(int a,int b,float Delta){

    float raiz2;
    raiz2 = (-(b*1.0) - sqrt(Delta)) / (2 * a*1.0);

    return raiz2;
    }



int main(void){
    //variaveis que o usu�rio ira atribuir//
    int a1, b1, c1;
    //variaveis que iram "chamar" as fun��es//
    float x1, x2, d;
    printf("----Calculadora de raizes de funcoes do segundo grau----\n\n");

    printf("Digite o primeiro termo da sua funcao:");
    scanf("%d",&a1);

    printf("Digite o segundo termo da sua funcao:");
    scanf("%d",&b1);

    printf("Digite o terceiro termo da sua funcao:");
    scanf("%d",&c1);
    //fun��o de delta//
    d = Delta(a1, b1, c1);
    //se a for 0 retorna 1//
    if(a1 == 0){

        return 1;
    //se o delta for negativo retorna 2//
    }else if(d < 0){

        return 2;
    //se tiver tudo certo o programa far� as duas raizes e mostrar� as raizes e no final tera o return como 0//
    }else{

    x1 = RaizX1(a1,b1,d);
    x2 = RaizX2(a1,b1,d);

    printf("A primeira raiz e %.2f e a segunda raiz e %.2f",x1,x2);

    }

    return 0;

}
