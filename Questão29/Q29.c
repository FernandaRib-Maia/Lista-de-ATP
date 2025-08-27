#include <stdio.h>

int main() {
    float custo_fabrica, custo_impostos, custo_total, custo_distribuidor, custo_consumidor;

    printf("Digite o custo de fabrica do carro: ");
    scanf("%f", &custo_fabrica);

    // Primeiro aplica impostos (45%)
    custo_impostos = custo_fabrica * 0.45;
    custo_total = custo_fabrica + custo_impostos;

    // Depois aplica distribuidor (28% sobre o valor com impostos)
    custo_distribuidor = custo_total * 0.28;

    // Soma final
    custo_consumidor = custo_total + custo_distribuidor;

    printf("O custo ao consumidor e: %.2f\n", custo_consumidor);

    return 0;
}
