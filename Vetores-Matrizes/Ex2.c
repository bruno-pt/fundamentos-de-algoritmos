#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    int vetA[12], vetB[15], i, j;

    srand(time(NULL));

    for(i=0; i<12; i++){
        vetA[i] = rand() % 50;
    }

    for(j=0; j<15; j++){
        vetB[j] = rand() % 50;
    }

    for(i=0; i<12; i++){
        for(j=0; j<15; j++){
            if(vetA[i] == vetB[j]){
                printf("Valor em comum!\n");
                printf("vetA[%i] == vetB[%i] == %i\n\n", i, j, vetA[i]);
            }
        }
    }

}
