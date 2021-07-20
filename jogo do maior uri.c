#include <stdio.h>

int main(void){

    int n, a, b, quant, add,z, x, y;

    while(1){

            x = 0;
            y = 0;

        scanf("%d",&n);

        if(n == 0){

            break;
        }

        for(quant = 0; quant < n; quant ++){

            a = 0;
            b = 0;

            scanf("%d %d",&a,&b);

            if(a == b){

                z = 1;

            }else if( a > b){

                z = 2;

            }else if(a < b){

                z = 3;

            }

                switch(z){

                    case 1:

                        x = x;

                        y = y;

                        break;

                    case 2:

                        x++;

                        break;

                    case 3:

                        y++;

                        break;

            }


        }

        printf("%d %d\n",x,y);
    }

    return 0;

}
