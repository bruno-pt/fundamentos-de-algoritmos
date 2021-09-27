#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    float vet[10], max;
    int i;
    max = 0;

        printf("Digite um valor para:\n", i);

    for(i=0; i<10; i++){
        printf("vet[%i]: ", i);
        scanf("%f", &vet[i]);

        if(vet[i] > max)
            max = vet[i];
    }

    printf("\nTodos os valores no vetor serão divididos pelo maior valor!\n");

    for(i=0; i<10; i++){
        vet[i] /= max;
        printf("\nvet[%i] = %.2f", i, vet[i]);
    }
    printf("\n");

}
