#include <stdio.h>
#include <locale.h>

struct Funcionario{
    char nome[50];
    int depart;
    float salario;
};

void main(){
setlocale(LC_ALL,"Portuguese");

    FILE *fp;
    struct Funcionario func[10];

    fp = fopen("Ex3.bin", "w+b");

    printf("\n\n--------- Cadastro de Funcionários ---------\n");

    for(int i=0; i<10; i++){
        printf("\n\n---- Funcionário %i ----\n", i+1);
        printf("Nome: ");
            fgets(func[i].nome, 50, stdin);
        printf("Departamento: ");
            scanf("%i", &func[i].depart);
        printf("Salário: R$ ");
            scanf("%f", &func[i].salario);
        fflush(stdin);
    }


}
