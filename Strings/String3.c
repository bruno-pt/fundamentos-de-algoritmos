#include <stdio.h>
#include <string.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int tam;

    printf("Digite um Nome: ");
    fgets(nome, 20, stdin);

    tam = strlen(nome) - 2;

    printf("\nO Nome de trás para frente fica: ");

    for(int i=tam; i>=0; i--){
        printf("%c", nome[i]);
    }

}
