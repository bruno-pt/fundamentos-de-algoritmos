#include <stdio.h>
#include <string.h>

void inverterPalavra(char *word);

void main(){
    char palavra[30];

    printf("Digite uma palavra: ");
    scanf("%s", &palavra);

    palavra[strlen(palavra)] = '\0';
    inverterPalavra(palavra);

    printf("\n\nPalavra Invertida: %s\n\n", palavra);
}

void inverterPalavra(char *word){
    int aux;
    char palavra[30];

    strcpy(palavra, word);
    aux = strlen(word) - 1;

    for(int i=0; i<=strlen(word); i++){
        word[i] = palavra[aux];
        aux--;
    }
}
