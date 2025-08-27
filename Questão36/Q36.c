#include <stdio.h>

int main(void)
{
    //Declaracao das Variaveis
    float custo, preco_convite;
    int qtd_custo, qtd_lucro;

    //Entrada de Dados
    printf("Digite o custo do espetaculo: ");
    scanf("%f", &custo);
    printf("Digite o preco do convite: ");
    scanf("%f", &preco_convite);

    // Processamento
    qtd_custo = ceil(custo / preco_convite);
    qtd_lucro = ceil((custo * 0.23) / preco_convite);

    //Saida
    printf("\nConvites necessarios para cobrir o custo: %d\n", qtd_custo);
    printf("Convites necessarios para obter 23%% de lucro: %d\n", qtd_lucro);

    return 0;
}
