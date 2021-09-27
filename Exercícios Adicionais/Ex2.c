#include <stdio.h>

void main(){

    int i, x, y[2];
    i = 0;

    printf("\nDigite um valor para X: ");
    scanf("%d", &x);

    while(i!=-1){
    printf("\nDigite um valor qualquer: ");
    scanf("%d", &y[i]);
        if(y[0]+y[1] == x)
            i = -1;
        else if(i==1)
            i = 0;
        else
            i++;
    }

    printf("\nA soma dos 2 ultimos valores digitados e igual a X!\n");
}
