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
            printf("| Digite a %d� nota: ", i);
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

        printf("\nContinuar para o pr�ximo aluno?\n");
        printf("[0] N�o , [1] Sim : ");
        scanf("%d", &i);
    }
    printf("\n\nA m�dia anual da turma �: %.2f\n", somanota/pesos);
    printf("\nA m�dia anual de aluno mais alta �: %.2f\n\n", max);
}
