#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    int n;
    float h =0;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    for(float i=1; i<=n; i++){
        h += 1/i;
    }

    printf("\nO valor de H é: %.2f", h);

}
