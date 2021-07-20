#include <stdio.h>
#include <math.h>

int main (void){

    int A, B, soma;

    scanf("%d %d", &A,&B);

            while(1 <= A && A <= B && B <= pow(10,9)){

            soma = soma + A;
            A++;
        }

        printf("%d",soma);

    return 0;

}
