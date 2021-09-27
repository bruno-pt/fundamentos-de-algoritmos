#include <stdio.h>
#include <string.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    char L1, L2;
    int i = 0;
    char str[] = "O Uber é um excelente professor!";

    printf("A string inicial é: \n%s\n", str);

    printf("\nTrocar o caractere: ");
    L1 = getchar();

    fflush(stdin);

    printf("\nPelo caractere: ");
    L2 = getchar();


    while(str[i] != '\0'){
        if(str[i] == L1)
            str[i] = L2;
        i++;
    }

    printf("\n\nA string com os caracteres trocados ficou: \n%s\n", str);

}
