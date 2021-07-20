#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char nomeFruta[20];
    int codigo;
    float preco;
} Product;

int main() {
    char ch;
    int t = 0;
    int variavel = 0;
    int variavel2 = 0;

    FILE *fp;
    Product produtos[10];

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 20; j++) {
            produtos[i].nomeFruta[j] = ' ';
        }
    }

    fp = fopen("texto.txt", "r"); //leitura de arquivo

    if (fp == NULL){              //fechar programa caso nao seja encontrado o arquivo
      return 1;
    }

    puts("conteudo do arquivo");

    while((ch = fgetc(fp)) != EOF) {
        if (ch == '\n') {
            variavel2++;
            t = 0;
            if (variavel2 % 2 == 0) {
                variavel++;
            }
            produtos[variavel].codigo = variavel + 1;
        }

        if (variavel2 % 2 == 0) {
            produtos[variavel].nomeFruta[t] = ch;
        }
        t++;
    }


    fclose(fp);

    printf("\n------------------------\n");
    printf("codigo - nome\n");

    for (int i = 0; i < 10; i++) {
        printf("%d - ", produtos[i].codigo);
        for (int j = 0; j < 20; j++) {
            if (produtos[i].nomeFruta[j] != '\n') {
                printf("%c", produtos[i].nomeFruta[j]);
            }
        }
        puts("\n");
    }
    return 0;
}
