#include <stdio.h>
#include <locale.h>

void main (){
setlocale(LC_ALL, "Portuguese");

    float st, temp, aux;
    st = aux = 0;

    for(int i=1; i<=30; i++){
        printf("\nDigite a Temperatura do dia %d: ", i);
        scanf("%f", &temp);
        st += temp;
            if (temp>aux)
                aux = temp;

    }

    printf("\n\nA temperatura m�dia do m�s �: %.2f �C\n", st/30);
    printf("\nA temperatura m�xima do m�s foi: %.2f �C\n", aux);


}
