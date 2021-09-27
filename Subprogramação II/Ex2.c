#include <stdio.h>
/**
Crie uma função usa passagem por referência que receba um número N e
atribua a uma variável de resultado o somatória de 1 até N (1+2+3+4...+N).
**/
//Protótipos
void receberN(int *num);
void somatorio(int *num, int *soma);

//Subprogramas
void main(){
    int resultado, n;

    receberN(&n);
    somatorio(&n, &resultado);

    printf("\nSomatorio ate %i = %i\n", n, resultado);
}

void receberN(int *num){
    printf("\nDigite um valor para N: ");
    scanf("%i", num);

}

void somatorio(int *num, int *soma){
    int i=0;
    while(i<=*num){
        *soma += i;
        i++;
    }

}
