#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    int idade[4], i, maior, pos;
    float media;
    i = media = maior = 0;

    do{
        printf("\nDigite a Idade da %d� pessoa: ", i+1);
        scanf("%d", &idade[i]);
        media += idade[i];
            if(idade[i]>maior){
                maior = idade[i];
                pos = i+1;
            }
        i++;
    } while(i<=3);

    printf("\n---------------------------------------\n");
    printf("\nA m�dia das Idades � de %.2f Anos!!\n", media/4);
    printf("\nA %d� pessoa � a mais velha com %d Anos!!\n", pos, maior);

}
