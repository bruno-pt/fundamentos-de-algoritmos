#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"Portuguese");

    int jogA, jogB, aux;
    jogA = jogB = aux= 0;

    printf("\n| Disputa de Artilharia (Jogador A x Jogador B) |\n\n");

    for(int i=1; i<=10; i++){
        printf("| Jogo %d |", i);

        printf("\n| Gols marcados pelo Jogador A: ");
        scanf("%d", &aux);
            jogA += aux;
        printf("| Gols marcados pelo Jogador B: ");
        scanf("%d", &aux);
            jogB += aux;
        printf("\n\n");
    }

    printf("\nO Jogador A marcou %d Gol(s)!", jogA);
    printf("\nO Jogador B marcou %d Gol(s)!\n", jogB);

    if(jogA>jogB)
        printf("\nDados os resultados, o Jogador A é o Artilheiro do Campeonato!!\n");
        else
            printf("\nDados os resultados, o Jogador B é o Artilheiro do Campeonato!!\n");

}
