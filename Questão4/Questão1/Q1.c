#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  int n1,n2,soma;

  //Entrada de Dados
  printf("Digite o primeiro numero:\n");
  scanf("%d",&n1);
  printf("Digite o segundo numero:\n");
  scanf("%d",&n2);

  //Processamento e Saida
  soma = n1 + n2;
  printf("\nO reultado da soma e :%d\n", soma);

  return 0;
}
