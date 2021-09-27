#include <stdio.h>
#include <math.h>
/**
Crie uma fun��o que utiliza passagem por refer�ncia que receba 2 pontos
no plano cartesiano e atribua a uma vari�vel do tipo real(float) a
dist�ncia entre os pontos.
Utilize uma matriz de inteiro para receber os pontos x e y.
F�rmula: d(A,B) = sqrt( (xb - xa)^2 + (yb - ya)^2 )
**/
//Prot�tipos
void receberPontos();
float calcDistAB(int matriz[2][2], float *distAB);
void cabecalho();

//Subprogramas
void main(){
    int pontos[2][2];
    float distAB;

    cabecalho();
    receberPontos(pontos);
    calcDistAB(pontos, &distAB);

    printf("\nA distancia entre os pontos: %f\n", distAB);
}

void cabecalho(){
    printf("\n\n-------- Distancia entre Pontos --------\n\n");
}

void receberPontos(int matriz[2][2]){
    int i, j, pos;
    char eixo[2];
    eixo[0] = 'X';
    eixo[1] = 'Y';
    pos = 1;
    for(i=0; i<2; i++){
        for(j=0; j<2; j++){
            printf("\nDigite um valor para o %c%i: ", eixo[j], pos);
            scanf("%i", &matriz[i][j]);
        }
        pos++;
    }
}

float calcDistAB(int matriz[2][2], float *distAB){
    *distAB = (float)sqrt(
                          pow((matriz[1][0] - matriz[0][0]), 2)
                          +
                          pow((matriz[1][1] - matriz[0][1]), 2)
                          );
}
