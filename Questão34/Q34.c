#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    float peso, altura, imc;

    // Entrada de dados
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    //Processamento
    imc = peso / (altura * altura);

    // Saida
    printf("\nSeu IMC e: %.2f\n", imc);

    return 0;
}
