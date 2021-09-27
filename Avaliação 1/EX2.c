#include <stdio.h>
#include <locale.h>
#include <math.h>

void main(){
setlocale(LC_ALL,"Portuguese");

int a, b, c, d, e, f;
float x, y, aux;


    printf("\nDigite um valor para a: ");
    scanf("%d", &a);
    printf("\nDigite um valor para b: ");
    scanf("%d", &b);
    printf("\nDigite um valor para c: ");
    scanf("%d", &c);
    printf("\nDigite um valor para d: ");
    scanf("%d", &d);
    printf("\nDigite um valor para e: ");
    scanf("%d", &e);
    printf("\nDigite um valor para f: ");
    scanf("%d", &f);

aux = (a*e) - (b*d);
x = ((c*e) - (b*f)) / aux;
y = ((a*f) - (c*d)) / aux;

    printf("\nO Valor de X é: %.2f", x);
    printf("\nO Valor de Y é: %.2f\n", y);

}
