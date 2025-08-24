#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n1,n2,divisao;

  printf("Digite o primeiro numero:\n");
  scanf("%d", &n1);

  printf("Digite o segundo numero:\n");
  scanf("%d", &n2);

  divisao = n1/n2;
  printf("O resultado da divisao e:%d\n", divisao);
  return 0;

}
