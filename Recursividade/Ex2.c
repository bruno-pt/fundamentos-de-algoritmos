#include <stdio.h>
#include <locale.h>

int somasSucessivas(int *n1, int *n2){
    int soma;

    if(soma < *n1 * *n2){
        soma = *n2 + somasSucessivas(n1, n2);
        return soma - *n2;
    }
}


void main(){
setlocale(LC_ALL, "Portuguese");

    int n1, n2;

    printf("\nDigite um valor para n1: ");
    scanf("%i", &n1);
    printf("\nDigite um valor para n2: ");
    scanf("%i", &n2);

    printf("\n\n");
    printf("%i * %i = ", n1, n2);

    for(int i=1; i<=n1; i++){
        printf("%i", n2);
        if(i<n1)
            printf(" + ");
    }

    printf(" = %i\n\n", somasSucessivas(&n1, &n2));
}
