#include <stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int plano;
    float salario;

    printf("\nDigite o sal�rio atual do funcion�rio: R$");
    scanf("%f", &salario);
    printf("\nDigite o Plano de Trabalho: ");
    scanf("%d", &plano);

    switch(plano){
        case 1: salario += salario*10/100;
                break;
        case 2: salario += salario*15/100;
                break;
        case 3: salario += salario*20/100;
                break;
    }

    printf("\nO novo sal�rio do funcion�rio �: R$%.2f\n", salario);
}
