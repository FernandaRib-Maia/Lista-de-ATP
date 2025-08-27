#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float comprimento,largura, profundidade, volume, valor;

  //Entrada de Dados
  printf("Digite o comprimento da piscina:\n");
  scanf("%f", &comprimento);
  printf("Digite a largura da piscina:\n");
  scanf("%f", &largura);
  printf("Digite a profundidade da piscina:\n");
  scanf("%f", &profundidade);

  //Processamento
  volume = comprimento * largura * profundidade;
  valor = volume * 45;

  //Saida
  printf("O valor da construcao e: %f\n", valor);

  return 0;


}
