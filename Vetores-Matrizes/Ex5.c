#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

void main(){
setlocale(LC_ALL, "Portuguese");

    char letras[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int tam, check, i, j, y, aux, cont, posi, posj, posjF, posiF;
    aux = cont = 0;

    srand(time(NULL));

    printf("\n\n------------CA�A PALAVRAS------------\n\n");

    printf("\nEscolha o tamanho do ca�a-palavras: ");
    scanf("%i", &tam);

    char str[tam], mat[tam][tam];

    fflush(stdin);

    printf("Digite a palavra para ca�ar: ");
    fgets(str, tam, stdin);

    str[strlen(str) - 1] = '\0';

    printf("\n\n");

    //GERA��O DO CA�A-PALAVRAS

    //GERA��O DOS �NDICES DAS COLUNAS
    printf("    ");
    for(i=1; i<=tam; i++){
        if(i>=10)
            printf("%i ", i);
        else
            printf("%i  ", i);
    }

    //GERA��O DA LINHA QUE SEPARA OS �NDICES DO CA�A
    printf("\n  ");
    for(i=1; i<=tam*3.3; i++){
        printf("-");
    }
    printf("\n");

    //LINHAS
    for(i=0; i<tam; i++){
        if(97 < rand()%100 && strlen(str) < tam-i && aux == 0)
            y = rand()%tam;
        //COLUNAS
        for(j=0; j<tam; j++){
            //GERA��O DOS �NDICES DAS LINHAS
            if(j==0 && i>=9)
                printf("%i| ", i+1);
            else if(j==0)
                printf("%i | ", i+1);
            //CHECA SE � POSS�VEL GERAR A PALAVRA NA LINHA
            if(97 < rand()%100 && strlen(str) < tam-j){
                //GERA��O DA PALAVRA
                for(int x=0; x<strlen(str); x++){
                    mat[i][j] = str[x];
                    printf("%c  ", mat[i][j]);
                    if(x<strlen(str))
                        j++;
                }
            }
            //TENTATIVA DE GERAR PALAVRAS VERTICAIS.... FAIL ;-; Gera apenas 1 e de in�cio na primeira Linha
            if(j == y && aux < strlen(str)){
                printf("%c  ", str[aux]);
                aux++;
                j++;
            }
            if(aux == strlen)
                aux = 0;
            else{ //GERA��O ALEAT�RIA DAS LETRAS
                mat[i][j] = letras[rand()%26];
                printf("%c  ", mat[i][j]);
            }
        }
        printf("\n");
    }
    //VERIFICA A PRESEN�A DA PALAVRA NA LINHA
    for(i=0; i<tam; i++){
        for(j=0; j<tam; j++){
            if(mat[i][j] == str[cont])
                cont++;
            //CASO A SEQU�NCIA DO CONTADOR SEJA = AO TAMANHO DA STRING
            else if(cont == strlen(str)){
                posi = i;
                posj = j - strlen(str);
                posjF = j-1;
                printf("\nPalavra na Linha %i e Coluna %i - %i !!\n", posi+1, posj+1, posjF+1);
                cont = 0;
            }
        }
        cont = 0; //Reinicia o contador da sequ�ncia
    }

    //VERIFICA A PRESEN�A DA PALAVRA NA COLUNA
    cont = 0;
    for(j=0; j<tam; j++){
        for(i=0; i<tam; i++){
            if(mat[i][j] == str[aux]){
               cont++;
               if(cont == 1){
                    posi = i;
                    posj = j;
               }
            }
            else if(cont == strlen(str)){
                posiF = i-1;
                printf("\nPalavra na Linha %i - %i e Coluna %i !!\n", posi+1, posiF+1, posj+1);
                cont = 0;
            }
        }
    }
    printf("\n\nGerar novamente?\n1-Sim  |  2-N�o: ");
    scanf("%i", &check);

        if(check == 1)
            main();

}
