#include <stdio.h>

int main(void)
{
    //Declaracao de Variavei
    float custo_fabrica, custo_impostos, custo_distribuidor, custo_consumidor;

    // Entrada dos Dados
    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    //Processamento
    // // Calculo do custo com impostos (45% sobre o custo de fábrica)
    custo_impostos = custo_fabrica + (custo_fabrica * 0.45);

    // Cálculo do custo com distribuidor (28% sobre o custo com impostos)
    custo_distribuidor = custo_impostos + (custo_impostos * 0.28);

    custo_consumidor = custo_distribuidor;

    // Saida
    printf("\nO custo ao consumidor e %.2 f\n", custo_consumidor);

    return 0;
}
