#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //Declaracao de variaveis
  float n1,n2,subtracao;

  //Entrada de dados
  printf("Digite o primeiro numero: \n");
  scanf("%f",&n1);
  printf("Digite o segundo numero: \n");
  scanf("%f",&n2);

  //Processamento e Saida
  subtracao = n1 - n2;
  printf("O resultado da subtracao e: %f\n", subtracao);

  return 0;
}
