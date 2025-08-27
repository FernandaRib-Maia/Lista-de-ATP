#include <stdio.h>

int main(void)
{
  //Declaracao de variaveis
  float diagonal, area;

  //Entrada de Dados
  printf("Digite a diagonal do quadrado:\n");
  scanf("%f", &diagonal);

  //Processsamento e Saida
  area = (diagonal * diagonal)/2;
  printf("\nO resultado da area do quadrado e:%f\n", area);

  return 0;

}
