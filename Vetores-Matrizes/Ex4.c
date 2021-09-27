#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int i, j;
    float mat[5][5], max;
    max = 0;

    printf("Digite um valor para:\n");

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("mat[%i][%i]: ", i, j);
            scanf("%i", &mat[i][j]);
            if(i == j && mat[i][j] > max)
                max = mat[i][j];
        }
        printf("\n");
    }

    printf("\nTodos os valores na matriz serão divididos pelo maior valor da diagonal principal!\n\n");

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            mat[i][j] /= max;
            printf("%.2f  ", mat[i][j]);
        }
        printf("\n");
    }

}
