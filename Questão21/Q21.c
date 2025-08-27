#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float v1,v2,v3,v4,v5,pagamento,soma,troco;

  //Entrada de Dados
  printf("Digite o valor do primeiro produto:\n");
  scanf("%f", &v1);
  printf("Digite o valor do segundo produto:\n");
  scanf("%f", &v2);
  printf("Digite o valor do terceiro produto:\n");
  scanf("%f", &v3);
  printf("Digite o valor do quarto produto:\n");
  scanf("%f", &v4);
  printf("Digite o valor do quinto produto:\n");
  scanf("%f", &v5);
  printf("Digite o valor do pagamento:\n");
  scanf("%f",&pagamento);

  //Processamento
  soma = v1 + v2 + v3 + v4 + v5;
  troco = pagamento - soma;

  //Saida
  printf("O troco do seu pagamento e: %f\n", troco);

  return 0;


}
