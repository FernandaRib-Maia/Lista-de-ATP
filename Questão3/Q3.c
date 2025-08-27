#include <stdio.h>

int main() {
    // Declaração de Variáveis
    float salarioMin, kilowatt, consumo, conta, desconto, novoValor;

    // Entrada de Dados
    printf("Digite o valor do salario minimo:\n ");
    scanf("%f", &salarioMin);
    printf("Digite a quantidade de kilowatt utilizados na residencia: ");
    scanf("%f", &consumo);

    // Processamento
    kilowatt = salarioMin / 5; // Valor do kilowatt (1/5 do salário mínimo)
    conta = kilowatt * consumo; // O valor do kilowatt vezes a quantidade consumida nos gera o valor da conta
    desconto = (conta * 15) / 100; // Desconto de 15%
    novoValor = conta - desconto;

    // Saída
    printf("O valor do kilowatt e: %f\n", kilowatt);
    printf("O valor da conta e: %f\n", conta);
    printf("O valor do desconto e: %f\n", desconto);
    printf("O novo valor a ser pago por essa residencia com o desconto e: %f\n", novoValor);

    return 0;
}
