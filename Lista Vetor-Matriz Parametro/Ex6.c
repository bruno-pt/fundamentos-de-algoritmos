#include <stdio.h>
#include <locale.h>

void diagPrincipal(int matriz[5][5], int vetor[5]){

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(i == j){
                vetor[i] = matriz[i][j];
            }
        }
    }
}

void main(){
setlocale(LC_ALL, "Portuguese");

    int matriz[5][5], vetor[5];

    printf("\n\n----- Complete a Matriz 5x5 -----\n\n");

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    diagPrincipal(matriz, vetor);

    printf("\n\nA Diagonal Principal da Matriz é: \n");

    for(int i=0; i<5; i++){
        printf("%i  ", vetor[i]);
    }
    printf("\n\n");
}
