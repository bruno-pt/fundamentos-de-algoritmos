#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int n, i, x, qntprimo, aux;
    qntprimo = 0;
    i = 1;

    printf("Imprimir os N primeiros números primos!\n");
    printf("Digite um valor para N: ");
    scanf("%d", &n);

    while(qntprimo != n){
        aux = 0;
        for(x=1; x<=i; x++){
            if(i%x == 0)
                aux++;
        }
        if(aux == 2){
            qntprimo++;
            printf(" %d ", i);
        }
        i++;
    }

}
