#include <stdio.h>

int main(void){

    int n, quant, nn = 0, c = 0, r = 0, s = 0, c1, r1, s1, total;

    float pc, pr, ps;

    char a;

    scanf("%d",&n);

    for(quant = 1; quant <= n; quant++){

        scanf("%d %c", &nn, &a);

        if(a == 'C'){
            c1 = nn;
            c = c + c1;
        }else if(a == 'R'){
            r1 = nn;
            r = r + r1;
        }else if(a == 'S'){
            s1 = nn;
            s = s + s1;
        }

        total = c + r + s;

    }

        pc = ((c * 100.0) / total);
        pr = ((r * 100.0) / total);
        ps = ((s * 100.0) / total);

    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",c);
    printf("Total de ratos: %d\n",r);
    printf("Total de sapos: %d\n",s);
    printf("Percentual de coelhos: %.2f %%\n",pc);
    printf("Percentual de ratos: %.2f %%\n",pr);
    printf("Percentual de sapos: %.2f %%\n",ps);

    return 0;

}
