#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    int i, max, min;
    i = 1;
    max = min = 0;

    printf("Digite 0 para finalizar!\n");

    do{
        printf("\nDigite um valor: ");
        scanf("%d", &i);
          /*  if(max == 0 && min == 0){
                max = i;
                min = i;
            } */
            if(i>max && i!=0)
                max = i;
            if(i<min && i!=0)
                min = i;
    }while(i!=0);

    printf("\nO valor máximo é: %d", max);
    printf("\nO valor mínimo é: %d\n\n", min);
}
