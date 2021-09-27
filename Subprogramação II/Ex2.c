#include <stdio.h>
/**
Crie uma fun��o usa passagem por refer�ncia que receba um n�mero N e
atribua a uma vari�vel de resultado o somat�ria de 1 at� N (1+2+3+4...+N).
**/
//Prot�tipos
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
