#include <stdio.h>

void main(){

    int x, y;

    printf("Digite um valor para X: ");
    scanf("%d", &x);

    while(y!=x){
    printf("\nDigite qualquer valor: ");
    scanf("%d", &y);
    }

    printf("\nVoce digitou um valor igual ao de X!\n");
}
