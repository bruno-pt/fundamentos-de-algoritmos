#include <stdio.h>
#include <locale.h>

struct Aluno{
    char nome[50];
    float nota1;
    float nota2;
};

void main(){
setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    struct Aluno aluno[100];
    int i, aux;

    i = 0;
    aux = 1;

    fp = fopen("Ex1.txt", "w");

    printf("\n\n----- Cadastro de Alunos -----\n\n\n");

    do{
        printf("--- Aluno %i ---\n", i+1);
        printf("Nome: ");
            fgets(aluno[i].nome, 50, stdin);
        printf("Nota 1: ");
            scanf("%f", &aluno[i].nota1);
        printf("Nota 2: ");
            scanf("%f", &aluno[i].nota2);

        i++;

        printf("\n\nContinuar cadastrando?");
        printf("\n1 = Sim    ||    0 = Não");
        printf("\nDigite: ");
        scanf("%i", &aux);
        printf("\n\n");
        fflush(stdin);
    }while(aux == 1);

    aux = 0;

    fprintf(fp, "Quantidade de Alunos: %i", i);

    for(int j=0; j < i; j++){
        fprintf(fp, "\n\n --- Aluno %i ---\n", j+1);
        fprintf(fp, "%s", aluno[j].nome);
        fprintf(fp, "%.2f\n", aluno[j].nota1);
        fprintf(fp, "%.2f\n", aluno[j].nota2);
    }

    fclose(fp);
}
