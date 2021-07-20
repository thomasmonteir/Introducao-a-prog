#include <stdio.h>
#include <string.h>

// Fun��o para criar o e-mail.
void GeraEmail(const char *nome, char *email){
    //Variaveis para contador.
    int i,t = 1;
    //Primeira letra do email igual a primeira letra do nome.
    email[0] = nome[0];
    //For para ver letra por letra at� o fim da string.
    for(i = 1;nome[i] != '\0';i++){
        /*Um if para caso haja um espa�o o espa�o no email t que � igual a i seja preenchido pela letra ap�s o espa�o e caso n�o significa que
        possui apenas um nome logo o final sera a posi��o. 1*/
        if(nome[i] == ' ' && nome[i] != '\0'){
            email[t] = nome[i+1];
            t++;
            //Fun��o que copia o caractere "\0" para a posi��o em que o email posi��o t est�.
            strcpy(&email[t],"\0");
        }else{
            strcpy(&email[t],"\0");
        }
    }
    //Fun��o de concatena��o para o email concatenar com a segunda parte.
    strcat(email,"@academico.ufpb.br");
}

int main(void){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}
