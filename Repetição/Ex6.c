#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    int i, soma;
    i = soma = 0;


    do{
       printf("\nDigite um n�mero: ");
       scanf("%d", &i);
        if(i>=0)
            soma += i;
    }while(i>=0);

    printf("\nN�mero negativo desconsiderado!");
    printf("\nA soma dos valores �: %d\n", soma);
}
