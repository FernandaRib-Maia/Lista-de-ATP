#include <stdio.h>

int main (void)
{
  //Declaracao de Variaveis
  int peso, gramas, aumento, novoPeso;

  //Entrada de Dados
  printf("Digite seu peso:\n");
  scanf("%d", &peso);

  //Processamento
  gramas = peso * 1000;
  aumento = (gramas * 5)/100;
  novoPeso = gramas + aumento;

  //Saida
  printf("\nO seu peso em gramas e:%d\n", gramas);
  printf("\nO seu peso em gramas com um ganho de peso e:%d\n", novoPeso );

  return 0;
}
