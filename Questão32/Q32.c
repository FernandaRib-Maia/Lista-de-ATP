#include <stdio.h>

int main(void)
{
  //Declarao de Variaveis
  int ano_nascimento, ano_atual,idade, idade_futuro;

  //Entrada de Dados
  printf("Digite o ano do seu nascimento: \n");
  scanf("%d", &ano_nascimento);
  printf("Digite o ano atual: \n");
  scanf("%d", &ano_atual);

  //Procesamento
  idade = ano_atual - ano_nascimento;
  idade_futuro = 2028 - ano_nascimento;

  //Saida
  printf("\nA idade dessa pesssoa em anos e: %d\n", idade);
  printf("\nA idade dessa pessoa em 2028 sera: %d\n", idade_futuro);

  return 0;


}
