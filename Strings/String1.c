#include <stdio.h>
#include <string.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    char string1[20], string2[20];

    printf("\nDigite qualquer coisa para a String 1: ");
    fgets(string1, 20, stdin);

    printf("\nDigite qualquer coisa para a String 2: ");
    fgets(string2, 20, stdin);

    //n�o fiz a remo��o do '\n', pois se vale para os 2, o valor final n�o muda!

    if(strlen(string1) == strlen(string2))
        printf("\nAs 2 Strings s�o iguais!\n");
        else if(strlen(string1) > strlen(string2))
            printf("\nA String 1 � maior que a String 2!\n");
        else
           printf("\nA String 2 � maior que a String 1!\n");

}
