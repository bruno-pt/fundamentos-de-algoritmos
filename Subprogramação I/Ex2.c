#include <stdio.h>

/**
ex2) Criar uma fun��o que calcule a convers�o de temperatura de Celsius para Fahrenheit,
retornando um valor do tipo inteiro e em seguida um procedimento que imprima no console o resultado da convers�o.
F�rmula: (�C x 9) / 5) + 32
**/
float tempC;

float converterTemp(float tempC){
    return ((tempC * 9) / 5) +32;
}

void receberTempC(){
    printf("Digite uma temperatura em Graus Celsius: ");
    scanf("%f", &tempC);
}

int main(){
    receberTempC();
    printf("\n\nTemperatura em Fahrenheit: %.1f\n\n", converterTemp(tempC));
}


