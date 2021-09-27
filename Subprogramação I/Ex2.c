#include <stdio.h>

/**
ex2) Criar uma função que calcule a conversão de temperatura de Celsius para Fahrenheit,
retornando um valor do tipo inteiro e em seguida um procedimento que imprima no console o resultado da conversão.
Fórmula: (°C x 9) / 5) + 32
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


