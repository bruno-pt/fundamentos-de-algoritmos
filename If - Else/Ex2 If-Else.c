#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    printf("\nInforme o lado 1 do Triângulo: ");
        scanf("%f", &x);
    printf("\nInforme o lado 2 do Triângulo: ");
        scanf("%f", &y);
    printf("\nInforme o lado 3 do Triângulo: ");
        scanf("%f", &z);

    if(x<y+z && y<x+z && z<x+y){
        if (x == y && x == z)
            printf("\nO Triângulo é Equilátero!!\n");
        else if (x == y || x == z || y == z)
            printf("\nO Triângulo é Isósceles!!\n");
        else
            printf("\nO Triângulo é Escaleno!!\n");
    } else
        printf("\nOs lados informados não formam um Triângulo!!\n");
}
