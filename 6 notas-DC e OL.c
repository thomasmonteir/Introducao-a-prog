#include <stdio.h>
#include <math.h>

int main(void){

float a,b,nota1,nota2,nota3,notag;

    printf("digite a primeira nota da primeira unidade:");
    scanf("%f",&a);

    printf("digite a segunda nota da primeira unidade:");
    scanf("%f",&b);


    if(a>b){
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor e sera multiplicada por 4\n",a,b);
    }else{
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor nota e sera multiplicada por 4\n",b,a);
    }

    if(a>b){
        nota1=(6.0 * a + 4.0 * b) / (6.0 + 4.0);
        printf("a media ponderada da primeira unidade foi %.1f\n\n",nota1);
    }else{
        nota1=(6.0 * b + 4.0 * a) / (6.0 + 4.0);
        printf("a media ponderada da primeira unidade foi %.1f\n\n",nota1);
    }

    printf("digite a primeira nota da segunda unidade:");
    scanf("%f",&a);

    printf("digite a segunda nota da segunda unidade:");
    scanf("%f",&b);


    if(a>b){
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor e sera multiplicada por 4\n",a,b);
    }else{
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor nota e sera multiplicada por 4\n",b,a);
    }

    if(a>b){
        nota2=(6.0 * a + 4.0 * b) / (6.0 + 4.0);
        printf("a media ponderada da segunda unidade foi %.1f\n\n",nota2);
    }else{
        nota2=(6.0 * b + 4.0 * a) / (6.0 + 4.0);
        printf("a media ponderada da segunda unidade foi %.1f\n\n",nota2);
    }

    printf("digite a primeira nota da terceira unidade:");
    scanf("%f",&a);

    printf("digite a segunda nota da terceia unidade:");
    scanf("%f",&b);


    if(a>b){
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor e sera multiplicada por 4\n",a,b);
    }else{
        printf("%.1f foi a maior nota e sera multiplicada por 6 \n%.1f foi a menor nota e sera multiplicada por 4\n",b,a);
    }

    if(a>b){
        nota3=(6.0 * a + 4.0 * b) / (6.0 + 4.0);
        printf("a media ponderada da terceira unidade foi %.1f\n\n",nota3);
    }else{
        nota3=(6.0 * b + 4.0 * a) / (6.0 + 4.0);
        printf("a media ponderada da terceira unidade foi %.1f\n\n",nota3);
    }

    notag=(nota1+nota2+nota3)/3;


     if(notag>= 9 && notag<=10){
        printf("sua media geral foi %.1f e seu conceito foi letra a",notag);
        }else if(notag>=8 && notag<9){
            printf("sua media geral foi %.1f e seu conceito foi letra b",notag);
            }else if(notag>=7 && notag<8){
            printf("sua media geral foi %.1f e seu conceito foi letra c",notag);
                }else if(notag>=6 && notag<7){
                printf("sua media geral foi %.1f e seu conceito foi letra d",notag);
                }else if(notag>=5 && notag<6){
                    printf("sua media geral foi %.1f e seu conceito foi letra e",notag);
                }else if(notag>=4 && notag<5){
                    printf("sua media geral foi %.1f e seu conceito foi letra f",notag);
            }



    return 0;

}
