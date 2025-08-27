#include <stdio.h>

int main(void)
{
    //Declaracao de Variavei
    float salario, aumento, novo_salario;

    //Entrada de Dados
    printf("Digite o valor do seu salario: \n");
    scanf("%f", &salario);

    //Processamento
    aumento = (salario * 37) / 100;
    novo_salario = salario + aumento;

    //Saida
    printf("\n1O seu salario com o aumento e: %f\n", novo_salario);

    return 0;
}
