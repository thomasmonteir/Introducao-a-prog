#include <stdio.h>
#include <stdlib.h>

int main(void){

int segundo,hora,minuto,segundos;

    printf("digite quantidade de segundos:");
    scanf("%d",&segundo);

    hora = segundo / 3600;
    minuto = segundo % 3600;
    printf("%d horas\n",hora);

    segundo = minuto;
    hora = segundo / 60;
    minuto = segundo % 60;
    printf("%d minutos\n",hora);

    segundo = minuto;
    hora = segundo;
    segundos = segundo;
    printf("%dsegundos\n",segundos);

    return 0;

}
