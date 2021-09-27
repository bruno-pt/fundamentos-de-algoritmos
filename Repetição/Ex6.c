#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    int i, soma;
    i = soma = 0;


    do{
       printf("\nDigite um número: ");
       scanf("%d", &i);
        if(i>=0)
            soma += i;
    }while(i>=0);

    printf("\nNúmero negativo desconsiderado!");
    printf("\nA soma dos valores é: %d\n", soma);
}
