#include <stdio.h>
#include <string.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    char str1[20], str2[20], str3[40];

    printf("Digite a 1º String: ");
    fgets(str1, 20, stdin);

    printf("\nDigite a 2º String: ");
    fgets(str2, 20, stdin);


    if(strcmp(str1,str2) == 0){
        strcpy(str3,str1);
        printf("\nStrings iguais!\n");
        printf("\nConteúdo: %s", str3);
    } else{
        str1[strlen(str1)-1] = ' ';
        str1[strlen(str2)-1] = '\0';
        strcpy(str3,str1);
        strcat(str3,str2);
        printf("\nStrings diferentes!\n");
        printf("\nConteúdo Mesclado: %s", str3);
    }

}
