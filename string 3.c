#include <stdio.h>

int OcorrenciasCaractereEmString(const char *str, char c){
    int cont = 0, i;

    for(i = 0; str[i] != '\0'; i++){
        if (str[i] == c)
            cont++;
    }

    return cont;
}

int ContaPalavras(const char *str){
    return OcorrenciasCaractereEmString(str, ' ') + 1;
}

int main(void){
    char str1[40],c;
    int q,p;

    fgets(str1,40,stdin);
    scanf("%c",&c);

    q = ContaPalavras(str1);
    printf("A string %s tem %d palavras.\n", str1, q);
    p = OcorrenciasCaractereEmString(str1,c);
    printf("a palavra %s tem %d letra(s) %c\n",str1,p,c);



    return 0;
}
