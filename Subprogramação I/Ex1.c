#include <stdio.h>
#include <stdlib.h>

/**
ex1) Criar uma função que recebe as dimensões da base e da altura de um triângulo e
retorne um valor inteiro que representa o cálculo área do triângulo. Fórmula: A = (b*h)/2
**/

int b, h;

void receberValores(){
    printf("Digite um valor para Base: ");
    scanf("%i", &b);
    printf("\nDigite um valor para Altura: ");
    scanf("%i", &h);
}

float calcularAreaTriangulo(int b, int h){
    return (float)(b*h) / 2;
}

int main(){
    receberValores();
    printf("\n\nArea do Triangulo = %.2f", calcularAreaTriangulo(b, h));
}

