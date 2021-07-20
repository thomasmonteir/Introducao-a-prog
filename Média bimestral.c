#include <stdio.h>
#include <stdlib.h>

int main (void){

    float media1,media2,media3,media4,mediag;

    printf("digite sua nota do primeiro bimestre:");
    scanf("%f",&media1);

    printf("digite sua nota do segundo bimestre:");
    scanf("%f",&media2);

    printf("digite sua nota do terceiro bimestre:");
    scanf("%f",&media3);

    printf("digite sua nota do quarto bimestre:");
    scanf("%f",&media4);

    mediag=(1 * media1 + 2 * media2 + 3 * media3 + 4 * media4)/10.0;

    printf("sua média ponderada é %.1f",mediag);

    return 0;




}
