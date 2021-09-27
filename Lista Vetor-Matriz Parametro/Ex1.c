#include <stdio.h>

int pares(int vetor[], int n){
    int quantPar;

    for(int i=0; i<n; i++){
        if(vetor[i] % 2 == 0)
            quantPar++;
    }
    return quantPar;
}

void main(){
    int n;

    printf("\nDigite a quatidade de elementos do vetor: ");
    scanf("%i", &n);
    printf("\n");

    int vetor[n];

    for(int i=0; i<n; i++){
        printf("Valor para Vetor[%i]: ", i);
        scanf("%i", &vetor[i]);
    }

    printf("\n\nA quantidade de numeros pares no Vetor: %i\n\n", pares(vetor, n));
}
