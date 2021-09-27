#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    char str1[50], str2[50];
    int aux, aux2, count;
    count = 0;

    printf("Digite uma palavra para saber se ela é um Palíndromo: ");
    fgets(str1, 50, stdin);

    str1[strlen(str1) - 1] = '\0';
    strcpy(str2, str1);
    aux = strlen(str1) - 1;
    aux2 = strlen(str1);

    for(int i=0; i<aux; i++){
        if(str1[i] == str2[aux])
            count++;
        aux--;
    }

    if(count == aux2/2)
        printf("\nA palavra '%s' é um Palíndromo!\n", str1);
    else
        printf("\nA palavra '%s' não é um Palíndromo!\n", str1);

}
