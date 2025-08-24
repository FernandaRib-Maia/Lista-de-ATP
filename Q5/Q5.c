#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  float n1,n2, media;
  int p1, p2;

  printf("Digite a primeira nota:\n");
  scanf("%f",&n1);

  printf("Digite o primeiro peso:\n");
  scanf("%d",&p1);


  printf("Digite a segunda nota:\n");
  scanf("%f",&n2);

  printf("Digite o segundo peso:\n");
  scanf("%d",&p2);

  media = (n1*p1 + n2*p2)/(p1 + p2);
  printf("O resultado da media ponderada e:%f\n", media);
  return 0;


}
