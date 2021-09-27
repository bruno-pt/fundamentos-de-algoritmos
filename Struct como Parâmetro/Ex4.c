#include <stdio.h>
#include <locale.h>

struct Produto{
    int id;
    char nome[50];
    float valor;
};

void cadastro(struct Produto produto[10]){
    printf("\n\n------------- Cadastro de Produtos -------------");
    for(int i=0; i<10; i++){
        printf("\n\n### Produto %i ###\n", i+1);
        printf(" | Código: ");
            scanf("%i", &produto[i].id);
            fflush(stdin);
        printf(" | Nome: ");
            fgets(produto[i].nome, 50, stdin);
        printf(" | Valor: ");
            scanf("%f", &produto[i].valor);
    }
}

float mediaValor(struct Produto produto[10]){
    float media = 0;

    for(int i=0; i<10; i++){
        media += produto[i].valor;
    }
    return media/10;
}

void valorMenorDez(struct Produto produto[10]){
    float aux;

    printf("### Produtos com valor inferior a 10 reais ###\n");

    for(int i=0; i<10; i++){
        if(produto[i].valor < 10){
            printf("\n### Produto %i ###\n", i+1);
            printf(" | Código: %i\n", produto[i].id);
            printf(" | Nome: %s", produto[i].nome);
            printf(" | Valor: %.2f\n", produto[i].valor);
        }
    }
    printf("\n\n");
}

void main(){
setlocale(LC_ALL, "Portuguese");

    struct Produto produto[10];

    cadastro(produto);

    printf("\n\n### A média de preço dos Produtos é: %.2f ###\n\n", mediaValor(produto));

    valorMenorDez(produto);
}
