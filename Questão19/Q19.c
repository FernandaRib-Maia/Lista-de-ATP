#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float n1,n2,n3, media, soma, resto1, resto2, resto3;

  //Entrada de Dados
  printf("Digite o primeiro numero:\n");
  scanf("%f",&n1);
  printf("Digite o segundo numero:\n");
  scanf("%f",&n2);
  printf("Digite o terceiro numero:\n");
  scanf("%f",&n3);

  //Processamento
  media = (n1 + n2 + n3)/ 3;
  soma = (n1 + n2 + n3);
  resto1 = soma - (int)(soma / n1) * n1;
  resto2 = soma - (int)(soma / n2) * n2;
  resto3 = soma - (int)(soma / n3) * n3;

  //Saida
  printf("A media desses numeros e: %f\n", media);
  printf("A soma desses numeros e: %f\n", soma);
  printf("O resta da divisao do somatorio do primeiro numero e: %f\n", resto1);
  printf("O resta da divisao do somatorio do segundo numero e: %f\n", resto2);
  printf("O resta da divisao do somatorio do terceiro numero e: %f\n", resto3);

  return 0;

}
