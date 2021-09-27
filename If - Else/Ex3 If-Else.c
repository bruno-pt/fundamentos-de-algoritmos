#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");

    float nota;

    printf("Digite média final do Aluno: ");
        scanf("%f", &nota);

    if(nota>=0 && nota<=10){
        if(nota>=0 && nota<=4.9)
            printf("\nAluno nota D.\n");
        else if(nota>=5 && nota <=6.9)
            printf("\nAluno nota C.\n");
        else if(nota>=7 && nota<=8.9)
            printf("\nAluno nota B!\n");
        else
            printf("\nAluno nota A!!\n");
    } else
        printf("\nNota Inválida!!\n");
}
