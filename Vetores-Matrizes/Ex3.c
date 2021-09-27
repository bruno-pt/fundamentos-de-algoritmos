#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int i, j, mat[6][5], soma;
    soma = 0;

    printf("Digite um valor para:\n");

    for(i=0; i<6; i++){
        for(j=0; j<5; j++){
            printf("mat[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            soma += mat[i][j];
        }
        printf("\n");
    }
    printf("\nA soma de todos os elementos da Matriz 'mat' é: %i!\n", soma);
}
