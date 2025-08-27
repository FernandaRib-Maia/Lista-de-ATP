#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  float SalarioFuncionario, SalarioMinimo, QuantdSalarioMin;

  //Entrada de Dados
  printf("Digite o salario do funcionario:\n");
  scanf("%f", &SalarioFuncionario);
  printf("Digite o valor do salario minimo :\n");
  scanf("%f", &SalarioMinimo);

  //Processamento e Saida
  QuantdSalarioMin = SalarioFuncionario / SalarioMinimo;
  printf ("O funcionario recebe aproximadamente essa quantidade de salarios minimos:%f\n", QuantdSalarioMin );

  return 0;

}
