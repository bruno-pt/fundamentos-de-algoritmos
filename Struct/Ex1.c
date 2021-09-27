#include <stdio.h>
#include <locale.h>

struct Cadastro{
    int ra;
    int serie;
    char nome[50];
    char curso[50];
};

void introducao(){
    printf("\n\n");
    printf("    **********************\n");
    printf("    * Registro de Alunos *\n");
    printf("    **********************\n");
    printf("\n\n");
    printf(" * O que deseja fazer? *");
}

void cadastrarAluno(struct Cadastro aluno[100], int i){
    printf("\n");
    printf("    *******************\n");
    printf("    * Novo Aluno (%iº) *\n", i);
    printf("    *******************\n\n");

    printf("| Digite o RA: ");
        scanf("%i", &aluno[i-1].ra);
        fflush(stdin);
    printf("| Digite o Nome: ");
        fgets(aluno[i-1].nome, 50, stdin);
    printf("| Digite o Curso: ");
        fgets(aluno[i-1].curso, 50, stdin);
    printf("| Digite a Série: ");
        scanf("%i", &aluno[i-1].serie);
}

void listarAluno(struct Cadastro aluno[100], int quantAlunos){
    int i = 0;

    printf("\n\n");
    printf("    ********************\n");
    printf("    * Lista de Alunos *\n");
    printf("    ********************\n");

    if(quantAlunos == 0)
        printf("\n * N�o h� alunos cadastrados!");
    else
        while(i<quantAlunos){
            printf("\n\n---Aluno %i---\n", i+1);
            printf("| RA: %i\n", aluno[i].ra);
            printf("| Nome: %s", aluno[i].nome);
            printf("| Curso: %s", aluno[i].curso);
            printf("| S�rie: %i", aluno[i].serie);
            i++;
        }
}

int escolha(){
    int num;

    printf("\n\n1 - Cadastrar um Aluno.\n");
    printf("2 - Listar os Alunos.\n\n");
    printf("Digite: ");
    scanf("%i", &num);

        if(num!=1 && num!=2){
            printf("\n\n * Op��o inv�lida! Escolha novamente.\n");
            escolha();
        } else
            return num;
}

void main(){
setlocale(LC_ALL,"Portuguese");

    struct Cadastro aluno[100];
    int continuar = 1;
    int quantAlunos = 0;
    int aux;

    introducao();

    while(continuar!=0){
        aux = escolha();

        if(aux == 1){
            quantAlunos++;
            cadastrarAluno(aluno, quantAlunos);
        } else
            listarAluno(aluno, quantAlunos);

        printf("\n\n--------------------------------\n");
        printf("1 - Sim   ||   0 - N�o");
        printf("\nRepetir? ");
        scanf("%i", &continuar);
        printf("--------------------------------\n");
    }

}
