#include <stdio.h>

int main(void)
{
  //Declarao de Variaveis
  int AnoNascimento, AnoAtual,idade, idadeSemanas;

  //Entrada de Dados
  printf("Digite o ano do seu nascimento: \n");
  scanf("%d", &AnoNascimento);
  printf("Digite o ano atual: \n");
  scanf("%d", &AnoAtual);

  //Procesamento
  idade = AnoAtual - AnoNascimento;
  idadeSemanas = (idade * 365)/7;

  //Saida
  printf("\nA idade dessa pesssoa em anos e: %d\n", idade);
  printf("\nA idade dessa pessoa em semanas e aproximadamente: %d\n", idadeSemanas);

  return 0;


}
