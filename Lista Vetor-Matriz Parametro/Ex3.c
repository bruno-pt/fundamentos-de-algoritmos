#include <stdio.h>

void completeVet(int vet[], int n){
    for(int i=0; i<n; i++){
        printf("Vet[%i]: ", i);
        scanf("%i", &vet[i]);
    }
}

void menorValor(int vet[], int n){
    int minValor;
    int pos;
    int aux;

    for(int i=0; i<n; i++){
        if(i == 0){
            minValor = vet[i];
            pos = i;
        }
        else if(vet[i] < minValor){
            minValor = vet[i];
            pos = i;
        }
    }
    aux = vet[0];
    vet[0] = minValor;
    vet[pos] = aux;
}

void main(){
    int n;

    printf("\nDigite o tamanho do Vetor: ");
    scanf("%i", &n);

    int vet[n];

    completeVet(vet, n);
    menorValor(vet, n);

    printf("\n\n---- Menor valor trocado com o valor do primeiro elemento ----\n\n");

    for(int i=0; i<n; i++){
        printf("Vet[%i]: %i\n", i, vet[i]);
    }
}
