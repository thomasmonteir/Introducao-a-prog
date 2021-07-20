#include <stdio.h>
#include <math.h>

int main(void) {

    double A,B,C;

    scanf("%lf %lf %lf",&A,&B,&C);

    if(A>=B+C){

        printf("NAO FORMA TRIANGULO\n");

    }else if(B>=A+C){

        printf("NAO FORMA TRIANGULO\n");

    }else if(C>=A+B){

        printf("NAO FORMA TRIANGULO\n");

    }else if ( A>=B && A>=C && B>=C && pow(A,2) > pow(B,2) + pow(C,2)){

        printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");

    }else if ( C>=B && C>=A  && pow(C,2) > pow(B,2) + pow(A,2)){

        printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");

    }else if ( B>=C && B>=A  && pow(B,2) > pow(A,2) + pow(B,2)){

        printf("TRIANGULO OBTUSANGULO\nTRIANGULO ISOSCELES\n");

    }else if (A>=B && A>=C && pow(A,2) < pow(B,2) + pow(C,2)){

        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");

    }else if (C>=B && C>=A && pow(C,2) < pow(A,2) + pow(B,2)){

        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");

    }else if (B>=C && B>=A && pow(B,2) < pow(A,2) + pow(C,2)){

        printf("TRIANGULO ACUTANGULO\nTRIANGULO ISOSCELES\n");

    }else if ( A==B && B==C && pow(A,2) < pow(B,2) + pow(C,2)) {

        printf("TRIANGULO ACUTANGULO\nTRIANGULO EQUILATERO\n");

    }else if(A>B && A>C && pow(A,2) == pow(B,2) + pow(C,2)){

        printf("TRIANGULO RETANGULO\n");

    }else if (B>A && B>C && pow(B,2) == pow(A,2) + pow(C,2)){

        printf("TRIANGULO RETANGULO\n");

    }else if (C>A && C>B && pow(C,2) == pow(A,2) + pow(B,2)){

        printf("TRIANGULO RETANGULO\n");

    }

    return 0;

}
