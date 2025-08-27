#include <stdio.h>
#include <math.h>

int main(void)

{
  //Declaracao de Variaveis
  double base, expo = 2,raiz, result;

  //Entrada de Dados
  printf("Digite o numero base:\n");
  scanf("%lf", &base);

  //Processamento e Saida
  result = pow (base, expo);
  raiz = sqrt(base);
  printf("%lf elevado a %lf e %lf\n", base, expo, result);
  printf("A raiz quadrada de %lf e %lf\n", base, raiz);

  return 0;
}
