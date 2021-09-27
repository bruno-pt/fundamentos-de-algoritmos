#include <stdio.h>

float divisao(int x);
void multiplicacao(int x,int *mult);

int main(){
    int num = 5, mult;
    float div;

    multiplicacao(num,&mult);

    printf("\n%d * 2 = %d",num, mult);
    printf("\n%d/2 = %.2f",num,divisao(num));
}

float divisao(int x){
    return (float) x/2;
}

void multiplicacao(int x,int *mult){
    *mult = x * 2;
}


"teste mano"
return;
float
eae mano beleza
printf("dadada");
multiplicacao()

