#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float valor, desconto, NovoValor;

  //Entrada de Dados
  printf("Digite o valor do produto:\n");
  scanf("%f", &valor);

  //Processamento
  desconto = ( valor * 9)/100;
  NovoValor = valor - desconto;

  //Saida
  printf("\nO valor do produto com o desconto e: %f\n", NovoValor);

  return 0;

  }
