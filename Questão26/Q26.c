#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    float a, b, c, d, e, f, x, y, denominador;

    // Entrada de dados
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);
    printf("Digite o valor de d: ");
    scanf("%f", &d);
    printf("Digite o valor de e: ");
    scanf("%f", &e);
    printf("Digite o valor de f: ");
    scanf("%f", &f);

    // Processamento (Calculo do denominador)
    denominador = (a * e) - (b * d);

    // Calculo de y e x usando as fórmulas fornecidas
    y = ((c * e) - (b * f)) / denominador;
    x = ((a * f) - (c * d)) / denominador;

    // Saida
    printf("\nO valor de x e %.2f\n ", x);
    printf("\nO valor de y e %.2f\n ", y);

    return 0;
}
