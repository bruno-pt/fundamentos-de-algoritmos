#include <stdio.h>

void trocarValor(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void main(){
    int valorA, valorB;

    printf("\nDigite um valor para A: ");
    scanf("%i", &valorA);
    printf("\nDigite um valor para B: ");
    scanf("%i", &valorB);

    trocarValor(&valorA, &valorB);

    printf("\nValor de A: %i \nValor de B: %i \n", valorA, valorB);
}
