#include <stdio.h>
#include <string.h>

// Função para criar o e-mail.
void GeraEmail(const char *nome, char *email){
    //Variaveis para contador.
    int i,t = 1;
    //Primeira letra do email igual a primeira letra do nome.
    email[0] = nome[0];
    //For para ver letra por letra até o fim da string.
    for(i = 1;nome[i] != '\0';i++){
        /*Um if para caso haja um espaço o espaço no email t que é igual a i seja preenchido pela letra após o espaço e caso não significa que
        possui apenas um nome logo o final sera a posição. 1*/
        if(nome[i] == ' ' && nome[i] != '\0'){
            email[t] = nome[i+1];
            t++;
            //Função que copia o caractere "\0" para a posição em que o email posição t está.
            strcpy(&email[t],"\0");
        }else{
            strcpy(&email[t],"\0");
        }
    }
    //Função de concatenação para o email concatenar com a segunda parte.
    strcat(email,"@academico.ufpb.br");
}

int main(void){
    char nome[101], email[101];

    fgets(nome, 101, stdin);
    GeraEmail(nome, email);
    puts(email);

    return 0;
}
