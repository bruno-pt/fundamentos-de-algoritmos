#include <stdio.h>

void main(){

    int n, i, j, aux;
    aux = 0;

    printf("Digite um valor para N: ");
    scanf("%d", &n);

    for(i=1; i<=n; i++){
        printf("*");
        if(i==n){
            aux++;
            i = aux;
            printf("\n");
        }
    }
    for (i=2; i<=n; i++){
        for (j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");
    }
}
