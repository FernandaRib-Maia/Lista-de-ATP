#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  //Declaracao de variaveis
  float n1,n2,n3, media;

  // Entrada de dados
  printf("Digite o primeiro numero:\n");
  scanf("%f",&n1);
  printf("Digite o segundo numero:\n");
  scanf("%f",&n2);
  printf("Digite o terceiro numero:\n");
  scanf("%f",&n3);

  //Processamento e Saida
  media = (n1 + n2 + n3)/3;
  printf("O resultado da media e:%f\n", media);

  return 0;
}
