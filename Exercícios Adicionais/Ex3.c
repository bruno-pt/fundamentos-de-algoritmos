#include <stdio.h>
#include <string.h>

void main(){

    char str1[100];
    int i, cont;
    i = cont = 0;

    printf("\n----Contador de Vogais----\n");
    printf("\nDigite uma frase qualquer: ");
    fgets(str1, 100, stdin);

    str1[strlen(str1) - 1] = '\0';

    while(str1[i]!='\0'){

        if(str1[i] == 'a' || str1[i] == 'A' ||
           str1[i] == 'e' || str1[i] == 'E' ||
           str1[i] == 'i' || str1[i] == 'I' ||
           str1[i] == 'o' || str1[i] == 'O' ||
           str1[i] == 'u' || str1[i] == 'U')
           cont++;
        i++;
    }

    printf("\nO numero de Vogais presente na frase: %d\n", cont);

}
