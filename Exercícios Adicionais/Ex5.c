#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int i, x, y, aux;

    printf("Imprimir os primos at�: ");
    scanf("%d", &x);

    for(i=1; i<=x; i++){
        aux = 0;
        for(y=1; y<=i; y++){
            if(i%y == 0)
                aux++;
        }
        if(aux == 2)
            printf(" %d ", i);
    }
}
