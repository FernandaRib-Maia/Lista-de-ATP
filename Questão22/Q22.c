#include <stdio.h>

int main(void)
{
  //Declaracao de Variaveis
  int A,B,C, troca;

  //Entrada de Dados
  printf("Digite o valor de A:\n");
  scanf("%d", &A);
  printf("Digite o valor de B:\n");
  scanf("%d", &B);
  printf("Digite o valor de C:\n");
  scanf("%d", &C);
  printf("Antes da troca: A = %d, B = %d, C = %d\n", A, B, C);

  //Processamento
  troca = A;
  A = B;
  B = C;
  C = troca;

  //Saida
  printf("\nApos a troca: A = %d, B = %d, C = %d\n", A, B, C);

  return 0;

  }
