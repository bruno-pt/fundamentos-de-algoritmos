#include <stdio.h>

void dobrarValor(int *a, int *b){
    *b = 2 * *a;
}

void main(){
    int valorA, valorB;

    printf("Digite um valor para A: ");
    scanf("%i", &valorA);

    dobrarValor(&valorA, &valorB);

    printf("\nValor de A: %i\nValor de B: %i\n", valorA, valorB);
}
