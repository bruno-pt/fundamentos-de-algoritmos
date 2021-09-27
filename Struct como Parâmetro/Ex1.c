#include <stdio.h>

struct Aluno{
    int ra;
    char nome[50];
};

void cadastro(struct Aluno aluno[1]){
    printf("\n\n-------- Cadastro do Aluno --------\n\n");
    printf("Nome: ");
    fgets(aluno[0].nome, 50, stdin);
    printf("RA: ");
    scanf("%i", &aluno[0].ra);
    printf("\n\n### Aluno Cadastrado com Sucesso! ###\n\n");
}

void main(){
    struct Aluno aluno[1];

    cadastro(aluno);

    printf("Nome do Aluno: %s", aluno[0].nome);
    printf("RA do Aluno: %i", aluno[0].ra);
    printf("\n\n");
}
