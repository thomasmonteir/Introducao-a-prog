#include <stdio.h>
#include <string.h>

int main(void) {

    int n, m, quant;
    int p, i;

    char str[51], frutas[900][51];

    double t, preco[900];

    scanf("%d", &n);

    while (n--) {

        t = 0;

        scanf("%d", &m);

        for (i = 0; i < m; i++) {

            scanf("%s %lf", frutas[i], &preco[i]);

        }

        scanf("%d", &p);

        while (p--) {

            scanf("%s %d", str, &quant);

            for (i = 0; i < m; i++) {

                if (!strcmp(str, frutas[i])) {

                    t += quant * preco[i];
                }
            }
        }
        printf("R$ %.2lf\n", t);
    }
    return 0;
}
