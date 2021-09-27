#include <stdio.h>

void main(){

    int num;

    printf("Digite um numero de 0 a 10: ");
    scanf("%d", &num);


    switch(num){
        case 0: printf("\nO numero digitado foi o Zero.\n");
                break;
        case 1: printf("\nO numero digitado foi o Um.\n");
                break;
        case 2: printf("\nO numero digitado foi o Dois.\n");
                break;
        case 3: printf("\nO numero digitado foi o Tres.\n");
                break;
        case 4: printf("\nO numero digitado foi o Quatro.\n");
                break;
        case 5: printf("\nO numero digitado foi o Cinco.\n");
                break;
        case 6: printf("\nO numero digitado foi o Seis.\n");
                break;
        case 7: printf("\nO numero digitado foi o Sete.\n");
                break;
        case 8: printf("\nO numero digitado foi o Oito.\n");
                break;
        case 9: printf("\nO numero digitado foi o Nove.\n");
                break;
        case 10: printf("\nO numero digitado foi o Dez.\n");
                break;
        default: printf("\nNumero Invalido!\n");
    }

}
