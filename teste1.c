#include <stdio.h>


int main(void){
    // Vari�veis utilizadas no programa
    int ar[100],troca, i, q, count = 0, x;
    //Scanf para receber a quantidade de numeros que ser�o digitados e guardados dentro do array
    scanf("%d", &q);
    //For com o i igual a zero e a cada n�mero digitado � adicionado a um esp�o do array ate chegar no q que � o espa�o do array
    for(i = 0; i < q; i++){
        scanf("%d", &ar[i]);
    }
    //Um lan�o while de repeti��o
    while(1){
    //Variavel troca igual a 0 para ser nulo e poder fazer os procedimentos sem intefer�ncia do valor inicial
    troca = 0;
        //For com o i igual a 0 menor que o tamanho do array -1 para poder caber dentro dos espa�os corretor do array
        for(i = 0; i < q-1; i++){
            //If mostrando que se o array i for menor que o seu sucessor  haver� uma troca de valores entre els e o troca receber� 1
            if(ar[i] < ar[i+1]){
                x = ar[i];
                ar[i] = ar[i+1];
                ar[i+1] = x;
                troca = 1;
            }
        }
        //Contador para mostrar a quantidade de vezes que array foi ordenado
        count++;
        //Break para encerrar o programa assim que o troca for mudado
        if (!troca){
            break;
        }
    }
    //For com i valendo 0 e enquanto for menor que, que � o tamanho do array, ele receber� mais um
    for(i = 0; i < q; i++){
        //Se o i for menor que o 1 - 1 mostrar� o valor em ar[1] com um espa�o
        if(i < q - 1){

            printf("%d ",ar[i]);
        //Se for igual ao q menos 1 colocara o valor com um \n ap�s ele
        }else if( i = q - 1){

            printf("%d\n",ar[i]);
        }
    }
    //Printf com o valor da quantidade de vezes da ordena��o
    printf("%d\n", count);

    return 0;
}
