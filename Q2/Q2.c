#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float n1,n2,subtracao;

  printf("Digite o primeiro numero: \n");
  scanf("%f",&n1);


  printf("Digite o segundo numero: \n");
  scanf("%f",&n2);

  subtracao = n1 - n2;
  printf("O resultado da subtracao e: %f\n", subtracao);
  return 0;


}
