#include <stdio.h>
#include <math.h>
//fun��o para saber se � trinagulo retangulo retornando um valor que sera usado no main
int EhtrianguloRetangulo(int a,int b,int c){

    if(a == 0 && b == 0 || a == 0 && c == 0 || b == 0 && c == 0){

        return -1;

    }else if(a %3 != 0 || a == 0|| b %4 != 0 || b == 0|| c %5 != 0 || c == 0){

        return 1;

    }else{

        return 0;
    }

}
//Fun��o para descobrir um numero caso um dos n�mero for invalido para complementar e transformar a equea��o
int FormaTrianguloRetangulo(int a, int b, int c){

    if(a <= 0){

        while(pow(a,2) + pow(b,2) != pow(c,2)){
            a++;
        }

        return a;

    }if(b <= 0){

        while(pow(a,2) + pow(b,2) != pow(c,2)){
            b++;
        }

        return b;

    }if(c <= 0){

        while(pow(a,2) + pow(b,2) != pow(c,2)){
            c++;
        }

        return c;
    }
}

//Fun��o main  com as instru��es de recolhimento de variaveis
int main(void){

    int a1,b1,c1;
    int tr,nv;

    scanf("%d",&a1);
    scanf("%d",&b1);
    scanf("%d",&c1);
    //"chamada" da fun��o para descobrir se � triangulo retangulo
    tr = EhtrianguloRetangulo(a1,b1,c1);

    if(tr == 0){

        printf("Formam triangulo retangulo\n");

    }else if(tr == -1){

        printf("%d",tr);
        return -1;

    }else{

        printf("Nao forma triangulo retangulo\n");

    }
    //"chamada" para a fun��o que mostra o novo numero no lugar de 0 para ser uma fun��o
    nv = FormaTrianguloRetangulo(a1,b1,c1);

    if(a1 <= 0){

        printf("Para ser triangulo retangulo o 'a' tem que ser %d\n",nv);

    }else if(b1 <= 0){

        printf("%Para ser triangulo retangulo o 'b' tem que ser %d\n",nv);

    }else if(c1 <= 0){

        printf("para ser triangulo retangulo o 'c' tem que ser %d\n",nv);

    }

    return 0;

}
