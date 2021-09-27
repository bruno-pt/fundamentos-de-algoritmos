#include <stdio.h>
#include <locale.h>

float fatorial(int n){
    float s;

    if(n <= 1){
        return 1;
    }
    else{
        //S = 1 + 1/1! + 1/2! + 1/n!
        //s += (1 / (n * fatorial(n-1)));
        return s = (1 / (n * fatorial(n-1)));;
    }
}

void main(){
setlocale(LC_ALL, "Portuguese");

    int n;

    printf("\n\nDigite um valor para N: ");
    scanf("%i", &n);

    if(n<=0){
        printf("\nValor inválido! Digite um maior que 0.");
        main();
    }
    else
        printf("\n\nO valor de S é: %.2f\n\n", fatorial(n));
}
