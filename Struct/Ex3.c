#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Aluno{
    char nome[50];
    int matricula;
    float nota[3];
};

void registrarAlunos(struct Aluno aluno[5]);
void retirarQuebraLinhaNomes(struct Aluno aluno[5]);
float calcularMedia(struct Aluno aluno[5], int i);
float maiorNota1(struct Aluno aluno[5]);
float maiorMedia(struct Aluno aluno[5]);
float menorMedia(struct Aluno aluno[5]);
void aprovacao(struct Aluno aluno[5]);

void main(){
setlocale(LC_ALL,"Portuguese");

    float maxNota1;
    float maxMedia;
    float minMedia;
    struct Aluno aluno[5];

    registrarAlunos(aluno);
    retirarQuebraLinhaNomes(aluno);
    maxNota1 = maiorNota1(aluno);
    maxMedia = maiorMedia(aluno);
    minMedia = menorMedia(aluno);
    aprovacao(aluno);
}

void retirarQuebraLinhaNomes(struct Aluno aluno[5]){
    for(int i=0; i<5; i++){
        aluno[i].nome[strlen(aluno[i].nome) - 1] = '\0';
    }
}

void registrarAlunos(struct Aluno aluno[5]){
    for(int i=0; i<5; i++){
        printf("\n\n------- Aluno %i -------\n", i+1);
            fflush(stdin);
        printf(" | Nome: ");
            fgets(aluno[i].nome, 50, stdin);

        printf(" | Matrícula: ");
            scanf("%i", &aluno[i].matricula);

        for(int j=0; j<3; j++){
            printf(" | %i ºNota: ", j+1);
            scanf("%f", &aluno[i].nota[j]);
        }
    }
}

float maiorNota1(struct Aluno aluno[5]){
    float maxNota1 = 0;

    for(int i=0; i<5; i++){
        if(aluno[i].nota[0] > maxNota1)
            maxNota1 = aluno[i].nota[0];
    }
    return maxNota1;
}

float maiorMedia(struct Aluno aluno[5]){
    float maxMedia = 0;
    float auxMedia = 0;

    for(int i=0; i<5; i++){
        auxMedia = calcularMedia(aluno, i);
        if(auxMedia > maxMedia)
            maxMedia = auxMedia;
    }
    return maxMedia;
}

float menorMedia(struct Aluno aluno[5]){
    float minMedia = 9999;
    float auxMedia = 0;

    for(int i=0; i<5; i++){
        auxMedia = calcularMedia(aluno, i);
        if(auxMedia < minMedia)
            minMedia = auxMedia;
    }
    return minMedia;
}

float calcularMedia(struct Aluno aluno[5], int i){
    float auxMedia = 0;
    int cont = 0;

    for(int j=0; j<3; j++){
        auxMedia += aluno[i].nota[j];
        cont++;
    }
    return auxMedia /= cont;
}

void aprovacao(struct Aluno aluno[5]){
    float auxMedia;

    for(int i=0; i<5; i++){
        auxMedia = calcularMedia(aluno, i);
        if(auxMedia >= 6)
            printf("\nO aluno %s foi aprovado!!!\n\n", aluno[i].nome);
        else
            printf("\nO aluno %s foi reprovado...\n\n", aluno[i].nome);
    }
}
