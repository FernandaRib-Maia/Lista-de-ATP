#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float distancia, velocidade, tempo_medio, velocidade_tempo;

  //Entrada de Dados
  printf("Digite a distancia percorrida (Km) :\n");
  scanf("%f", &distancia);
  printf("Digite a velocidade em que a distancia foi percorrida (Km/h) :\n");
  scanf("%f", &velocidade);

  //Processamento
  tempo_medio = distancia / velocidade;
  velocidade_tempo = (tempo_medio * 5)/18;

  //Saida
  printf("O tempo medio da distancia percorrida e: %f\n", tempo_medio);
  printf("A velocidade em (m/s) e: %f\n", velocidade_tempo);

  return 0;
}
