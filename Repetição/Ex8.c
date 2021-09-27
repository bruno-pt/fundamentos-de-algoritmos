#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL,"Portuguese");

    int idade, id50, qntalt, qntpeso;
    float altura, peso, altsoma;

    id50 = qntalt = qntpeso = idade = 0;
    altsoma = altura = peso = 0;

    for(int i=1; i<=25; i++){
    printf("\n| Pessoa %d |\n", i);

    printf("| Idade: ", i);
    scanf("%d", &idade);

    printf("| Altura: ", i);
    scanf("%f", &altura);

    printf("| Peso: ", i);
    scanf("%f", &peso);

    printf("\n\n");

        if(idade>50)
            id50++;
        if(idade>10 && idade<20){
            altsoma += altura;
            qntalt++;
            }
        if(peso<40)
            qntpeso++;
    }
    if(id50==0)
        printf("\nNão há pessoas com idade acima de 50 anos!\n");
        else
            printf("\nA quantidade de pessoas com mais de 50 anos é: %d\n", id50);

    if(qntalt==0)
        printf("\nNão há pessoas com idade entre 10 e 20 anos para uma média de altura!\n");
        else
            printf("\nA média de altura das pessoas com idade entre 10 e 20 anos é: %.2f cm\n", altsoma/qntalt);

    printf("\nA porcentagem de pessoas com peso inferior a 40Kg é: %d%%\n\n", 4*qntpeso);

}
