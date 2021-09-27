#include <stdio.h>
#include <string.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    char nome[20];
    int tam;

    printf("Digite um Nome: ");
    fgets(nome, 20, stdin);

    printf("\nAs 4 primeiras letras do nome são: ");

    for(int i=0; i<=3; i++){
        printf("%c", nome[i]);
    }
}
