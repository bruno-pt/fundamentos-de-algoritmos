#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    int num, aux;
    aux = 0;

    for(int i=1; i<=20; i++){
        printf("\nDigite o valor do %d� n�mero: ", i);
        scanf("%d", &num);
            if(num>8)
                aux++;
    }
    printf("\nDos 20 n�meros digitados, %d n�meros s�o maiores que 8!!", aux);
}
