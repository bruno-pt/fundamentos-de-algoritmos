#include <stdio.h>
#include<locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    float lar;

    printf("\n\n----------PROMO��O DE LARANJAS----------\n\n");
    printf("\nAt� 11 Laranjas, cada uma sai por R$0,35\n");
    printf("\nDe 12 Laranjas para mais, cada uma sai por R$0,30\n");
    printf("\nDigite a quantidade de Laranjas: ");
    scanf("%f", &lar);

    if(lar>0 && lar<12)
        printf("\n%.0f Laranja(s) sair� por R$%.2f\n", lar, lar*0.35);
    else if(lar>=12)
        printf("\n%.0f Laranjas sair� por R$%.2f\n", lar, lar*0.30);
    else
        printf("\nQuantidade de Laranjas Inv�lida!!\n");


}
