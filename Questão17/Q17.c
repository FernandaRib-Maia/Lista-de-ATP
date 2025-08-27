#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  int quantidade1, quantidade2, quantidade3;
  float valor1, valor2, valor3, formulaTotal;

  //Entrada de Dados
  printf("Digite a quantidade do primeiro produto:\n");
  scanf("%d", &quantidade1);
  printf("Digite o valor do primeiro produto:\n");
  scanf("%f", &valor1);
  printf("Digite a quantidade do segundo produto:\n");
  scanf("%d", &quantidade2);
  printf("Digite o valor do segundo produto:\n");
  scanf("%f", &valor2);
  printf("Digite a quantidade do terceiro produto:\n");
  scanf("%d", &quantidade3);
  printf("Digite o valor do terceiro produto:\n");
  scanf("%f", &valor3);

  //Processamento
  formulaTotal = (quantidade1 * valor1 + quantidade2 * valor2 + quantidade3 * valor3);

  //Saida
  printf("O valor total e: %f\n", formulaTotal);

  return 0;

}
