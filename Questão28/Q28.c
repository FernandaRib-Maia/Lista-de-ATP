
#include <stdio.h>

int main(void)
 {
    float valor_compra, prestacao;

    // Entrada do valor da compra
    printf("Digite o valor da compra:\n ");
    scanf("%f", &valor_compra);

    // Processsamento
    prestacao = valor_compra / 5;

    // Saida
    printf("\nValor de cada prestacao (sem juros): %f\n", prestacao);

    return 0;
}
