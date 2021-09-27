#include <stdlib.h>
#include <math.h>

/**
ex3) Crie uma função que receba as coordenadas de 2 pontos no plano cartesiano e retorne
o valor do tipo real que representa a distância entre os pontos.
Fórmula: d(A,B) = sqrt( (xb - xa)^2 + (yb - ya)^2 )
**/
int Xa, Ya, Xb, Yb;

void receberPontos(){
    printf("Digite o valor de Xa: ");
        scanf("%i", &Xa);
    printf("\nDigite o valor de Ya: ");
        scanf("%i", &Ya);
    printf("\nDigite o valor de Xb: ");
        scanf("%i", &Xb);
    printf("\nDigite o valor de Yb: ");
        scanf("%i", &Yb);
}

float distanciaEntrePontos(int Xa, int Ya, int Xb, int Yb){
    return (float)sqrt(pow((Xb-Xa), 2) + pow((Yb-Ya), 2));
}

int main(){
    receberPontos();
    printf("\n\nA distancia entre os 2 pontos: %.2f\n\n", distanciaEntrePontos(Xa, Ya, Xb, Yb));
}
