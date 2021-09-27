#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Eletrodomestico{
    char nome[15];
    float kW;
    int horasAtivo;
};

void registrarEletro(struct Eletrodomestico eletro[5]);
void breakLineName(struct Eletrodomestico eletro[5]);
float consumoTotal(struct Eletrodomestico eletro[5], int *dias);
float consumoRelativo(struct Eletrodomestico eletro[5], float *kWTotal, int *dias);

void main(){
setlocale(LC_ALL,"Portuguese");

    struct Eletrodomestico eletro[5];
    int dias;
    float kWTotal;
    float kWRelativo;

    registrarEletro(eletro);
    breakLineName(eletro);

    printf("\n\n | Calcular consumo para quantos dias: ");
        scanf("%i", &dias);
    printf("\n");

    kWTotal = consumoTotal(eletro, &dias);
    kWRelativo = consumoRelativo(eletro, &kWTotal, &dias);
}

void registrarEletro(struct Eletrodomestico eletro[5]){
    for(int i=0; i<5; i++){
        printf("\n\n-------- Eletrodoméstico %i --------\n", i+1);
        printf(" | Nome: ");
            fflush(stdin);
            fgets(eletro[i].nome, 15, stdin);
        printf(" | Consumo (kW): ");
            scanf("%f", &eletro[i].kW);
        printf(" | Tempo ativo diário (h): ");
            scanf("%i", &eletro[i].horasAtivo);
    }
}

void breakLineName(struct Eletrodomestico eletro[5]){
    for(int i=0; i<5; i++){
        eletro[i].nome[strlen(eletro[i].nome) - 1] = '\0';
    }
}

float consumoTotal(struct Eletrodomestico eletro[5], int *dias){
    float kWTotal = 0;

    for(int i=0; i<5; i++){
        kWTotal += (eletro[i].kW * eletro[i].horasAtivo * *dias);
    }
    return kWTotal;
}

float consumoRelativo(struct Eletrodomestico eletro[5], float *kWTotal, int *dias){
    float kWRelativo = 0;
    float kWUnico = 0;

    for(int i=0; i<5; i++){
        kWUnico = eletro[i].kW * eletro[i].horasAtivo * *dias;
        kWRelativo = (100 * kWUnico) / *kWTotal;

        printf("\n | %s", eletro[i].nome);
        printf("\n | Consumo relativo: %.2f %%\n", kWRelativo);
    }
}
