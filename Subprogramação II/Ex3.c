#include <stdio.h>
#include <math.h>
#include <locale.h>
/**
Desenvolva um programa, usando estrutura modular,  implementando uma função
(que não possui valor de retorno) que calcula o Índice de Massa Corpórea (IMC) por meio
da seguinte fórmula: IMC = PC/(Alt^2)

Onde: PC = Peso Corporal (kg) e Alt = altura (metros), utilizar float ex: 1.75

E uma função (que possui valor de retorno inteiro), chamada de dentro do procedimento, que recebe através de parâmetro o IMC
calculado pelo procedimento e retorna o ID (identificador) do IMC, conforme a tabela abaixo:

ID,    IMC ,     Interpretação
1, Menos de 20 , Magro
2, [20..24],.....Normal
3, [25..29],.....Acima do Peso
4, [30..34],.....Obsidade
5, Acima de 34...Obsidade Grave

Obs.: Você deve, no programa principal, perguntar o peso e a altura para o usuário e,
então, realizar a chamada do procedimento que desencadeará o processo da resposta.

Mostre como resultado uma string com a Interpretação do ID

Exemplo:  Resultado = “Magro”
**/

//Protótipos
int Id(float imc);
void calcIMC(float *imc, float *peso, float *altura);
void classificacao(float *imc);
void cabecalho();


//Subprogramas
void main(){
setlocale(LC_ALL,"Portuguese");
    float imc, peso, altura;

    cabecalho();

    printf("\nDigite o Peso: ");
    scanf("%f", &peso);

    printf("\nDigite a Altura (metros): ");
    scanf("%f", &altura);

    calcIMC(&imc, &peso, &altura);
    classificacao(&imc);
}

int Id(float imc){
    if(imc < 20)
        return 1;
    else if(imc >= 20 && imc <=24)
        return 2;
    else if(imc >=25 && imc <=29)
        return 3;
    else if(imc >= 30 && imc <=34)
        return 4;
    else
        return 5;
}

void calcIMC(float *imc, float *peso, float *altura){
    *imc = (float)*peso / pow(*altura, 2);
}

void classificacao(float *imc){
    int aux = Id(*imc);
    switch(aux){
        case 1: printf("\nClassificação: Magro\n");
            break;
        case 2: printf("\nClassificação: Normal\n");
            break;
        case 3: printf("\nClassificação: Acima do Peso\n");
            break;
        case 4: printf("\nClassificação: Obesidade\n");
            break;
        case 5: printf("\nClassificação: Obesidade Grave\n");
            break;
    }

}
void cabecalho(){
    printf("\n***************************************\n");
    printf("*                                     *\n");
    printf("*  Calculador e Classificador de IMC  *\n");
    printf("*                                     *\n");
    printf("***************************************\n");
}
