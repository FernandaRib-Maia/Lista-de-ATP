#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float comprimento,altura, area;

  //Entrada de Dados
  printf("Digite a medida do comprimento do lote de terra:\n");
  scanf("%f", &comprimento);
  printf("Digite a medida da altura do lote de terra:\n");
  scanf("%f", &altura);

  //Processamento
  area = comprimento * altura;

  //Saida
  printf("A area total do lote de terra e: %f\n", area);

  return 0;

}
