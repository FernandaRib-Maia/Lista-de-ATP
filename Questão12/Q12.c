#include <stdio.h>

int main(void)
{
  //Declaracao das Variaveis
  float salario, aumento, NovoSalario;

  //Entrada de Dados
  printf("Digite o valor do seu salario:\n");
  scanf("%f", &salario);

  //Processamento e Saida
  aumento = (salario * 25)/100;
  NovoSalario = salario + aumento;
  printf("\nO valor do seu salario com o aumento sera: %f\n", NovoSalario);

  return 0;

}
