#include <stdio.h>

int main() {
    float valorCompra, prestacao;

    // Entrada do valor da compra
    printf("Digite o valor da compra: ");
    scanf("%f", &valorCompra);

    // C�lculo da presta��o (valor total dividido por 5)
    prestacao = valorCompra / 5;

    // Exibi��o das 5 presta��es
    printf("Valor de cada prestacao (sem juros): %.2f\n", prestacao);
    printf("Prestacao 1: %.2f\n", prestacao);
    printf("Prestacao 2: %.2f\n", prestacao);
    printf("Prestacao 3: %.2f\n", prestacao);
    printf("Prestacao 4: %.2f\n", prestacao);
    printf("Prestacao 5: %.2f\n", prestacao);

    return 0;
}
