#include <stdio.h>
#include <locale.h>

int maiorValor(int matriz[3][3]){
    int maxValor;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(i==0 && j==0)
                maxValor = matriz[i][j];
            else if(matriz[i][j] > maxValor)
                maxValor = matriz[i][j];
        }
    }
    return maxValor;
}

void main(){
setlocale(LC_ALL, "Portuguese");

    int matriz[3][3];

    printf("\n\n----- Complete a Matriz 3x3 -----\n\n");

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Matriz[%i][%i]: ", i, j);
            scanf("%i", &matriz[i][j]);
        }
    }

    printf("\n\nO maior valor da matriz é: %i\n\n", maiorValor(matriz));
}
