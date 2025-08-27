#include <stdio.h>
#include <string.h>
int main(void)
{
  //Declaracao de Variaveis
  char n1[100], n2[100], n3[100];

  //Entrada de Dados
  printf("Digite o primeiro nome:\n"),
  scanf("%s",&n1);
  printf("Digite o segundo nome:\n"),
  scanf("%s",&n2);
  printf("Digite o terceiro nome:\n"),
  scanf("%s",&n3);

  //Processsamento e Saida
  printf("%s",n1);
  printf(" %s ",n3);
  printf("\n%s",n2);

  return 0;

}
