#include <stdio.h>
#include <locale.h>

struct HorasMinutos{
    int horas;
    int minutos;
};

void main(){
setlocale(LC_ALL,"Portuguese");
    int minutosInicial;
    struct HorasMinutos HM;

    printf("Digite um intervalo de tempo medido em Minutos: ");
    scanf("%i", &minutosInicial);

    HM.minutos = minutosInicial;

    while(HM.minutos >= 60){
        HM.horas++;
        HM.minutos -= 60;
    }

    printf("\n\n%i minutos equivalem a %i horas e %i minutos!\n\n", minutosInicial, HM.horas, HM.minutos);
}
