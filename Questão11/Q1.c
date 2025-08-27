#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float salario, imposto, desconto;

  //Entrada de Dados
  printf("Digite o valor do seu salario:\n");
  scanf("%f", &salario);

  //Processamento e Saida
  imposto = (salario * 5)/100;
  desconto = salario - imposto;
  printf("\nO valor do seu salario com a retirada do imposto de renda e:%f\n", desconto);

  return 0;

}
