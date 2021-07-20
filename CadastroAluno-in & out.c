#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DISCENTE 60
#define MAX_NOME 31
#define MAX_MATRICULA 16

int qDiscentes = 0;

typedef struct {
    char nome[MAX_NOME];
    char matricula[MAX_MATRICULA];
    float nota1, nota2,nota3,rec;
    } tDiscente;

tDiscente discente[MAX_DISCENTE];

void RemoveBarraN(char *str){
    if (str[strlen(str)-1] == '\n'){
        str[strlen(str)-1] = '\0';
    }
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

char *NomeMateria(char *mat){


    return mat;
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
        fscanf(fp, "%f %f %f %f%*c", &discente[qDiscentes].nota1, &discente[qDiscentes].nota2,&discente[qDiscentes].nota3,&discente[qDiscentes].rec);
        qDiscentes++;
    }

    if (fclose(fp) == 0){
        printf("Dados carregados com sucesso.\n");
    }
}

void SalvaDados(){
    int i;
    FILE *fp;
    float media;

    fp = fopen("notas-s.txt", "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de dados.\n");
        return;
    }

    char *str;

    str = NomeMateria;

    fprintf(fp,"\n--------------------------------------------------------------------\n");
    fprintf(fp,"Materia:%s",str);
    fprintf(fp,"\n--------------------------------------------------------------------\n");
    fprintf(fp," Matricula\tNome\t\t\tNota 1\tNota 2\tnota3\tRec\tMedia\n");
    fprintf(fp,"--------------------------------------------------------------------\n");

    for(i = 0; i < qDiscentes; i++){

        media = Media(discente[i].nota1, discente[i].nota2,discente[i].nota3,discente[i].rec);

        if(discente[i].rec != 0){
            if(i %2 == 0){
        fprintf(fp," %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }else{
        fprintf(fp," %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }
        }else{
            if(i %2 == 1){
        fprintf(fp," %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }else{
        fprintf(fp," %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }

        }
    }

    if (fclose(fp) == 0){
        printf("Dados salvos com sucesso.\n");
    }
}

void ExibeMenu(){
    printf("\n----------- Menu -----------\n"
           "1 - Cadastrar discente\n"
           "2 - Cadastrar notas\n"
           "3 - Relatorio de notas\n"
           "4 - Cadastra matéria\n"
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
    scanf("%s%*c", discente[qDiscentes].matricula);
    printf("\tNome: ");
    fgets(discente[qDiscentes].nome, MAX_NOME, stdin);
    RemoveBarraN(discente[qDiscentes].nome);
    qDiscentes++;
}

void CadastraNotas(){
    int i;

    for(i = 0; i < qDiscentes; i++){
        printf("\nNotas do discente %s (%s):\n", discente[i].nome, discente[i].matricula);
        printf("\tNota 1: ");
        scanf("%f", &discente[i].nota1);
        printf("\tNota 2: ");
        scanf("%f", &discente[i].nota2);
        printf("\tNota 3: ");
        scanf("%f", &discente[i].nota3);
        printf("\tRec: ");
        scanf("%f", &discente[i].rec);
    }
}

int ProcuraMatricula(const char *chave){
    int i;

    for(i = 0; i < qDiscentes; i++){
        if ( strcmp(chave, discente[i].matricula ) == 0 )
            return i;
    }

    return -1;
}

int ProcuraNome(const char *chave){
    int i;

    for(i = 0; i < qDiscentes; i++){
        if ( strstr(discente[i].nome, chave) != NULL )
            return i;
    }

    return -1;
}

void ExibeDiscente(int i){
    printf("Informacoes do discente #%d:\n", i+1);
    printf("\tMatricula: %s\n", discente[i].matricula);
    printf("\tNome: %s\n", discente[i].nome);
    printf("\tNota 1: %.1f\n", discente[i].nota1);
    printf("\tNota 2: %.1f\n", discente[i].nota2);
    printf("\tNota 3: %.1f\n", discente[i].nota3);
    printf("\tRec: %.1f\n", discente[i].rec);
}

/*
    opcao 0 = matricula
    opcao 1 = nome
*/
void ConsultaDiscente(int opcao){
    char chave[MAX_NOME];
    int i;

    printf("Digite a chave de pesquisa: ");
    fgets(chave, MAX_NOME, stdin);
    RemoveBarraN(chave);

    if (opcao == 0){
        i = ProcuraMatricula(chave);
    }else{
        i = ProcuraNome(chave);
    }

    if (i >= 0){
        ExibeDiscente(i);
    }else{
        puts("Discente nao encontrade.");
    }
}

void Relatorio(){
    int i;
    float media;
    char *str;

    str = NomeMateria;

    printf("\n--------------------------------------------------------------------\n");
    printf("Materia:%s",str);
    printf("\n--------------------------------------------------------------------\n");
    printf(" Matricula\tNome\t\t\tNota 1\tNota 2\tnota3\tRec\tMedia\n");
    printf("--------------------------------------------------------------------\n");

    for(i = 0; i < qDiscentes; i++){

        media = Media(discente[i].nota1, discente[i].nota2,discente[i].nota3,discente[i].rec);

        if(discente[i].rec != 0){
            if(i %2 == 0){
        printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }else{
        printf(" %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }
        }else{
            if(i %2 == 1){
        printf(" %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }else{
        printf(" %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }

        }
    }

    printf("--------------------------------------------------------------------\n");
}

void RelatorioEmArquivo(const char *arq){
    int i;
    FILE *fp;
    char *str;
    float media;

    fp = fopen(arq, "w");
    if (fp == NULL){
        printf("Erro ao criar o arquivo de relatorio \"%s\".\n", arq);
        return;
    }

    fprintf(fp,"\n--------------------------------------------------------------------\n");
    fprintf(fp,"Materia:%s",str);
    fprintf(fp,"\n--------------------------------------------------------------------\n");
    fprintf(fp," Matricula\tNome\t\t\tNota 1\tNota 2\tnota3\tRec\tMedia\n");
    fprintf(fp,"--------------------------------------------------------------------\n");

    for(i = 0; i < qDiscentes; i++){

        media = Media(discente[i].nota1, discente[i].nota2,discente[i].nota3,discente[i].rec);

        if(discente[i].rec != 0){
            if(i %2 == 0){
        fprintf(fp," %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }else{
        fprintf(fp," %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t%.1f\t%.1f\t%s\n",discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3,discente[i].rec, media,Situ(media,discente[i].rec));
            }
        }else{
            if(i %2 == 1){
        fprintf(fp," %s\t\t%s\t\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }else{
        fprintf(fp," %s\t\t%s\t\t%.1f\t%.1f\t%.1f\t - \t%.1f\t%s\n", discente[i].matricula,discente[i].nome,discente[i].nota1,discente[i].nota2,discente[i].nota3, media, Situ(media,discente[i].rec));
            }

        }
    }

    fprintf(fp,"--------------------------------------------------------------------\n");


    if (fclose(fp) == 0){
        printf("Relatorio criado no arquivo \"%s\".\n", arq);
    }
}


void AtualizaNota(){
    char chave[MAX_MATRICULA];
    int i;

    printf("Digite a matricula: ");
    fgets(chave, MAX_MATRICULA, stdin);
    RemoveBarraN(chave);

    i = ProcuraMatricula(chave);
    if (i == -1){
        puts("Matricula nao encontrada.");
        return;
    }

    ExibeDiscente(i);
    printf("Digite nova Nota 1: ");
    scanf("%f", &discente[i].nota1);
    printf("Digite nova Nota 2: ");
    scanf("%f", &discente[i].nota2);
}

void OrdenaNome(){
    int i, trocou;
    tDiscente aux;

    trocou = 1;
    while(trocou){
        trocou = 0;
        for(i = 0; i < qDiscentes-1; i++){
            if ( strcmp(discente[i].nome, discente[i+1].nome) > 0 ){
                aux = discente[i];
                discente[i] = discente[i+1];
                discente[i+1] = aux;
                trocou = 1;
            }
        }
    }

}

int main(void){
    int opcao;
    int tipoBusca;
    char arq[31];
    char mat[31];

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
                Relatorio();
                break;

            case 4:
                printf("Digite o nome da materia:");
                scanf("%s",mat);
                NomeMateria(mat);
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
