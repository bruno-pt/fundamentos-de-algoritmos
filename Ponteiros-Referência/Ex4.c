#include <stdio.h>

float media(int *a, int *b, int *max){
    if(*a >= *b)
        *max = *a;
    else
        *max = *b;

    return (float)(*a + *b) / 2;
}

void main(){
  int valorA, valorB, maior;
  float aux;

    printf("Digite um valor para A: ");
    scanf("%i", &valorA);
    printf("Digite um valor para B: ");
    scanf("%i", &valorB);

    aux = media(&valorA, &valorB, &maior);

    printf("\nMedia de A e B: %.2f  \nMaior valor: %i\n", aux, maior);
}
