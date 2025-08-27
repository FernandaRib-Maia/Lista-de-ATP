#include <stdio.h>
#include <math.h>

int main(void)

{
  //Declaracao de Variaveis
  double base, expo, result;

  //Entrada de Dados
  printf("Digite o numero base:\n");
  scanf("%lf", &base);
  printf("Digite o numero do expoente:\n");
  scanf("%lf", &expo);

  //Processamento e Saida
  result = pow (base, expo);
  printf("%.2lf elevado a %.2lf e %.2lf\n", base, expo, result);

  return 0;

}
