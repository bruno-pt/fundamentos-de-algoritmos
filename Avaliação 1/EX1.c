#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    int idade;

    printf("\nDigite a Idade: ");
    scanf("%d", &idade);

    if(idade<5)
        printf("\nEsportista não pode ser classificado!!\n");
    else if(idade>=5 && idade<=7)
        printf("\nO Esportista é classificado como Infantil A!\n");
    else if(idade>=8 && idade<=10)
        printf("\nO Esportista é classificado como Infantil B!\n");
    else if(idade>=11 && idade<=13)
        printf("\nO Esportista é classificado como Juvenil A!\n");
    else if(idade>=14 && idade <=17)
        printf("\nO Esportista é classificado como Juvenil B!\n");
    else
        printf("\nO Esportista é classificado como Adulto!\n");

}
