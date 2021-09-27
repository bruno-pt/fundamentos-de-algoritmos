#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Cadastro{
    char nome[50];
    int idade;
    float altura;
};

void main(){
setlocale(LC_ALL, "Portuguese");

    FILE *fp;
    struct Cadastro pessoa[100];
    int i, aux;

    i = 0;
    aux = 1;

    fp = fopen("Ex2.txt", "w");

    printf("\n\n----- Cadastro de Pessoas -----\n\n\n");

    do{
        printf("--- Pessoa %i ---\n", i+1);
        printf("Nome: ");
            fgets(pessoa[i].nome, 50, stdin);
        printf("Idade: ");
            scanf("%i", &pessoa[i].idade);
        printf("Altura (m): ");
            scanf("%f", &pessoa[i].altura);
            fflush(stdin);

        pessoa[i].nome[strlen(pessoa[i].nome) - 1] = '\0';

        i++;

        printf("\n\nContinuar cadastrando?");
        printf("\n1 = Sim    ||    0 = Não");
        printf("\nDigite: ");
        scanf("%i", &aux);
        printf("\n\n");
        fflush(stdin);
    }while(aux == 1);

    aux = 0;

    for(int j=0; j < i; j++){
        fprintf(fp, "%s tem %i anos e %.2f de altura.\n", pessoa[j].nome, pessoa[j].idade, pessoa[j].altura);
    }

    fclose(fp);
}
