#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    int i, j;
    float somanota, alunos, pesos, nota, max, aux[4], testmedia;

    alunos = somanota = max = 0;
    i = 1;
    j = 0;

    while(i!=0){
        j++;
        printf("\n| Aluno %d |\n", j);

        for(i=1; i<=4; i++){
            printf("| Digite a %dº nota: ", i);
            scanf("%f", &nota);

            somanota += (i*nota);
            aux[i-1] = nota;

            if(i==4){
                alunos++;
                pesos = alunos*10;
                testmedia = (aux[0] + (aux[1]*2) + (aux[2]*3) + (aux[3]*4)) / 10;
            }

            if(testmedia>max)
                max = testmedia;
        }

        printf("\nContinuar para o próximo aluno?\n");
        printf("[0] Não , [1] Sim : ");
        scanf("%d", &i);
    }
    printf("\n\nA média anual da turma é: %.2f\n", somanota/pesos);
    printf("\nA média anual de aluno mais alta é: %.2f\n\n", max);
}
