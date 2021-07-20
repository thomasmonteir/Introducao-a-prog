#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_MATERIA 100
#define MAX_DISCENTE 60
#define MAX_NOME 31
#define MAX_MATRICULA 16

int qDiscentes = 0;

float nota1[MAX_DISCENTE], nota2[MAX_DISCENTE], nota3[MAX_DISCENTE], rec[MAX_DISCENTE];
char nome[MAX_DISCENTE][MAX_NOME];
char matricula[MAX_DISCENTE][MAX_MATRICULA];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
}

void CarregaDados(){
    FILE *fp;
    char str[101];

    fp = fopen("notas.dat", "r");
    if (fp == NULL){
        printf("Erro ao abrir o arquivo de dados.\n");
        return;
    }

    while(1){
        fgets(str, 101, fp);
        if (feof(fp))
            break;
        RemoveBarraN(str);
        strcpy(discente[qDiscentes].matricula, str);
        fgets(str, 101, fp);
        RemoveBarraN(str);
        strcpy(discente[qDiscentes].nome, str);
        fscanf(fp, "%f %f%*c", &discente[qDiscentes].nota1, &discente[qDiscentes].nota2);
        qDiscentes++;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}

void SalvaDados(){
    int i;
    FILE *fp;

    fp = fopen("notas.dat", "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }
    for(i = 0; i < qDiscentes; i++){
        fprintf(fp, "%s\n%s\n%f %f\n", discente[i].matricula, discente[i].nome, discente[i].nota1, discente[i].nota2);
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
}

void CadastraMateria(){

    char materia[60];

    printf("Materia: ");
    fgets(materia[60], 60, stdin);

    return materia;
}


float Media(float v1, float v2, float v3, float rec){

    float media;
    float mediag;
    float mediar;

    if(rec != 0){

    mediar = (v1+v2+v3)/3;
    mediag = ((mediar * 6 ) + (rec * 4))/10;

    }else{

    media = (v1+v2+v3)/3;
    mediag = media;

    }

    return mediag;
}

char *Situ(float media, float rec){

    if(rec != 0){

    if(media >= 5){

        return "Aprovado";

    }else{

        return "Reprovado";
    }

    }else{

    if(media >= 7){

        return "Aprovado";
    }else{

        return "Reprovado";
    }

    }
}


void ExibeMenu(){
    printf("\n----------- Menu -----------\n"
           "1 - Cadastrar discente\n"
           "2 - Cadastrar notas\n"
           "3 - Cadastrar materia\n"
           "4 - Relatorio de notas\n"
           "5 - Salvar dados\n"
           "6 - Carregar dados\n"
           "7 - Sair\n\n");
}

void AdicionaDiscente(){
    if (qDiscentes >= MAX_DISCENTE){
        puts("Capacidade de armazenamento cheia.");
        return;
    }

    printf("Insira as informacoes do discente #%d: \n", qDiscentes + 1);
    printf("\tMatricula: ");
    scanf("%s%*c", matricula[qDiscentes]);
    printf("\tNome: ");
    fgets(nome[qDiscentes], MAX_NOME, stdin);
    RemoveBarraN(nome[qDiscentes]);
    qDiscentes++;
}

void CadastraNotas(){
    int i;

    for(i = 0; i < qDiscentes; i++){
        printf("\nNotas do discente %s (%s):\n", nome[i], matricula[i]);
        printf("\tNota1: ");
        scanf("%f", &nota1[i]);
        printf("\tNota2: ");
        scanf("%f", &nota2[i]);
        printf("\tNota3: ");
        scanf("%f", &nota3[i]);
        printf("\tRec: ");
        scanf("%f", &rec[i]);
    }
}


void ExibeDiscente(int i){
    printf("Informacoes do discente #%d:\n", i+1);
    printf("\tMatricula: %s\n", matricula[i]);
    printf("\tNome: %s\n", nome[i]);
    printf("\tNota1: %.1f\n", nota1[i]);
    printf("\tNota2: %.1f\n", nota2[i]);
    printf("\tNota3: %.1f\n", nota3[i]);
    printf("\tRec: %.1f\n", rec[i]);

}

/*
    opcao 0 = matricula
    opcao 1 = nome
*/


void Relatorio(){
    int i;
    float media;

    printf("\n---------------------------------------------------------------------------------------------------------\n");

    printf("Disciplina: %s",CadastraMateria);

    printf("\n---------------------------------------------------------------------------------------------------------\n");
    printf(" Matricula\tNome\t\t\tNota1\tNota2\tNota3\tRec\tMedia\tSituacao\n");
    printf("--------------------------------------------------------------------------------------------------------\n");

    for(i = 0; i < qDiscentes; i++){

        media = Media(nota1[i], nota2[i],nota3[i],rec[i]);

        if(rec[i] != 0){
            if(i %2 == 0){
        printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n", matricula[i], nome[i], nota1[i], nota2[i],nota3[i], rec[i], media,Situ(media,rec[i]));
            }else{
        printf(" %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n", matricula[i], nome[i], nota1[i], nota2[i],nota3[i], rec[i], media,Situ(media,rec[i]));
            }
        }else{
            if(i %2 == 1){
        printf(" %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", matricula[i], nome[i], nota1[i], nota2[i],nota3[i], media, Situ(media,rec[i]));
            }else{
        printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", matricula[i], nome[i], nota1[i], nota2[i],nota3[i], media, Situ(media,rec[i]));
            }

        }
    }

    printf("--------------------------------------------------------------------------------------------------------\n");
}


void OrdenaNome(){
    int i, trocou;
    char auxNome[MAX_NOME];
    float auxNota;

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < qDiscentes-1; i++){
            if ( strcmp(nome[i], nome[i+1]) > 0 ){
                strcpy(auxNome, nome[i]);
                strcpy(nome[i], nome[i+1]);
                strcpy(nome[i+1], auxNome);

                strcpy(auxNome, matricula[i]);
                strcpy(matricula[i], matricula[i+1]);
                strcpy(matricula[i+1], auxNome);

                auxNota = nota1[i];
                nota1[i] = nota1[i+1];
                nota1[i+1] = auxNota;

                auxNota = nota2[i];
                nota2[i] = nota2[i+1];
                nota2[i+1] = auxNota;

                trocou = 1;
            }
        }
    }


}

int main(void){
    int opcao;
    int tipoBusca;

    while(1){
        ExibeMenu();
        printf("Digite a opcao: ");
        scanf("%d%*c", &opcao);

        if (opcao == 7)
            break;

        switch(opcao){
            case 1:
                AdicionaDiscente();
                break;
            case 2:
                CadastraNotas();
                break;

            case 3:
                CadastraMateria();
                break;
            case 4:
                Relatorio();
                break;

            case 5:
                SalvaDados();
                break;

            case 6:
                CarregaDados();
                break;


            default:
                puts("Opcao invalida.");
        }
    }

    return 0;
}
