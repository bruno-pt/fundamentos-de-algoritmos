#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float x, y, z;

    printf("\nInforme o lado 1 do Tri�ngulo: ");
        scanf("%f", &x);
    printf("\nInforme o lado 2 do Tri�ngulo: ");
        scanf("%f", &y);
    printf("\nInforme o lado 3 do Tri�ngulo: ");
        scanf("%f", &z);

    if(x<y+z && y<x+z && z<x+y){
        if (x == y && x == z)
            printf("\nO Tri�ngulo � Equil�tero!!\n");
        else if (x == y || x == z || y == z)
            printf("\nO Tri�ngulo � Is�sceles!!\n");
        else
            printf("\nO Tri�ngulo � Escaleno!!\n");
    } else
        printf("\nOs lados informados n�o formam um Tri�ngulo!!\n");
}
