#include <stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int num[3], i;

    for(i=0; i<3; i++){
        printf("\nDigite o %dº valor: ", i+1);
        scanf("%d", &num[i]);
            if(num[i]==num[i-1]){
                printf("\nValor Igual a um dos anteriores!\n");
                i--;
            }
    }



}
