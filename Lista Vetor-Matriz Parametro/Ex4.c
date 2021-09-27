#include <stdio.h>
#include <locale.h>

int compareVet(int vet1[], int vet2[], int n){
    int cont = 0;
    int aux = n-1;
    int retorno;

    for(int i=0; i<n; i++){
        if(vet1[i] == vet2[i])
            cont++;
    }

    if(cont == n){ //Vetores Iguais
        return 1;
    }

    else{
        cont  = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(vet1[i] == vet2[j]){
                    cont++;
                    j = n;
                }
            }
        }

        if(cont == n){ //Mesmos elementos, mas em ordem diferente
            return 2;
        }
        else if(cont < n){ //1 valor de Vet1 não existe em Vet2
                return 3;
            }
        }
    }


void main(){
setlocale(LC_ALL, "Portuguese");

    int aux, n;

    printf("Digite um tamanho para Vet1 e Vet2: ");
    scanf("%i", &n);

    int vet1[n], vet2[n];

    for(int i=1; i<=2; i++){
        printf("\n\n----- Valores de Vet%i -----\n\n", i);
        for(int j=0; j<n; j++){
            printf("Vet%i[%i]: ", i, j);
            if(i == 1)
                scanf("%i", &vet1[j]);
            else
                scanf("%i", &vet2[j]);
        }
    }

    aux = compareVet(vet1, vet2, n);

    switch(aux){
        case 1: printf("\nOs vetores são iguais!\n");
                    break;
        case 2: printf("\nVetores com mesmo elementos, mas em ordem diferente!\n");
                    break;
        case 3: printf("\nExiste, pelo menos, 1 elemento de Vet1 que não está em Vet2!\n");
                    break;
    }
}
