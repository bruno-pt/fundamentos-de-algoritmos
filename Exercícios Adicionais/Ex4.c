#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int x, aux;

    printf("Digite um numero para saber se � primo: ");
    scanf("%d", &x);

    for(int i=1; i<=x; i++){
        if(x%i == 0)
            aux++;
    }
        if(aux == 2)
            printf("\nO n�mero %d � primo!\n", x);
        else
            printf("\nO n�mero %d n�o � primo!\n", x);
}
