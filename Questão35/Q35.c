#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    int num_apartamentos;
    float diaria, diaria_promocional, total100, total70, perda;

    //Entrada de Dadoss
    printf("Digite o numero de apartamentos: ");
    scanf("%d", &num_apartamentos);
    printf("Digite o valor da diaria por apartamento: ");
    scanf("%f", &diaria);

    //Processamento
    diaria_promocional = diaria * 0.75 ; // desconto de 25%
    total100 = num_apartamentos * diaria_promocional;
    total70 = total100 * 0.7;
    perda = (num_apartamentos * diaria) - total100;

    //Saida
    printf("\nValor promocional da diaria: R$ %.2f\n", diaria_promocional);
    printf("\nValor total com 100%% de ocupacao: R$ %.2f\n", total100);
    printf("\nValor total com 70%% de ocupacao: R$ %.2f\n", total70);
    printf("\nValor que o hotel deixou de arrecadar: R$ %.2f\n", perda);

    return 0;
}
