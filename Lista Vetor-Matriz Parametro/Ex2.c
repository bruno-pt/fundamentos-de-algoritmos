#include <stdio.h>

void intercala(int v1[], int v2[], int v3[], int dimensao){
    int cont = 0;

    for(int i=0; i<dimensao; i++){
        v3[cont] = v1[i];
        cont++;
        v3[cont] = v2[i];
        cont++;
    }

}

void main(){

    int n;

    printf("Digite o tamanho dos Vetores v1 e v2: ");
    scanf("%i", &n);

    int v1[n], v2[n], v3[n*2];

    for(int i=1; i<=2; i++){
        printf("\n\n------- Complete o Vetor v%i -------\n\n", i);
        for(int j=0; j<n; j++){
            printf("Valor para v%i[%i]: ", i, j);
            if(i==1)
                scanf("%i", &v1[j]);
            else
                scanf("%i", &v2[j]);
        }
    }

    intercala(v1, v2, v3, n);

    printf("\n\n---- Elementos dos Vetores v1 e v2 intercalados no Vetor v3 ----\n\n");

    for(int i=0; i<n*2; i++){
        printf("v3[%i]: %i\n", i, v3[i]);
    }
}
