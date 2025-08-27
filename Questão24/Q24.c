#include <stdio.h>
#include <math.h>

int main()
{
    // Declaração das variáveis
    double P, i, valor_acumulado;
    int n;

    // Entrada de dados
    printf("Digite o valor da aplicacao mensal :\n");
    scanf("%lf", &P);
    printf("Digite a taxa de juros mensal (em decimal, ex.: 0.01 para 1%%):\n");
    scanf("%lf", &i);
    printf("Digite o numero de meses:\n ");
    scanf("%d", &n);

    // Processamento (Cálculo  usando a fórmula fornecida)
    valor_acumulado = (P * (pow(1 + i, n) - 1)) / i;

    // Saida
    printf("Valor acumulado apos %d meses: R$ %.2f\n", n, valor_acumulado);

    return 0;
}
