#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    float tempo, velocidade, distancia, litros;

    //Entrada de Dados
    printf("Informe o tempo gasto na viagem (em horas): ");
    scanf("%f", &tempo);
    printf("Informe a velocidade media durante a viagem (em km/h): ");
    scanf("%f", &velocidade);

    // Procesamento
    distancia = tempo * velocidade;
    litros = distancia / 12.0;

    //Saida
    printf("\nDistancia percorrida: %.2f km\n", distancia);
    printf("\nQuantidade de combustivel gasto: %.2f litros\n", litros);

    return 0;
}
