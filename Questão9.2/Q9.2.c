#include <stdio.h>
#include <math.h>

int main(void)
{
 //Declaracao das variaveis
  float TrianguloBase,TrianguloAltura, TrianguloArea, QuadradoLado, QuadradoArea, CirculoRaio, TrapezioBaseMaior, TrapezioBaseMenor,TrapezioAltura, TrapezioArea, RetanguloBase,RetanguloAltura,RetanguloArea,LosangoDiagonalMaior, LosangoDiagonalMenor, LosangoArea;
  float CirculoArea, pi = 3.143;

  //Entrada de dados do triangulo
  printf("Digite a medida da base do triangulo:\n");
  scanf("%f", &TrianguloBase);
  printf("Digite a medida da altura do triangulo:\n");
  scanf("%f", &TrianguloAltura);

  //Processamento e saida (Triangulo)
  TrianguloArea = (TrianguloBase * TrianguloAltura)/2;
  printf("A area do triangulo e: %f\n", TrianguloArea);

  //Entrada de dados do quadrado
  printf("\nDigite a medida do lado do quadrado:\n");
  scanf("%f", &QuadradoLado);

  //Processamento e saida (quadrado)
  QuadradoArea = QuadradoLado * QuadradoLado;
  printf("A area do quadrado e: %f\n", QuadradoArea);

  //Entrada de dados do circulo
  printf("\nDigite a medida do raio do circulo:\n");
  scanf("%f", &CirculoRaio);

  //Processamento e saida (circulo)
  CirculoArea = (CirculoRaio * CirculoRaio) * pi;
  printf("A area do circulo e: %f\n", CirculoArea);

  //Entrada de dados do trapezio
  printf("\nDigite a medida da base maior do trapezio:\n");
  scanf("%f", &TrapezioBaseMaior);
  printf("\nDigite a medida da base menor do trapezio:\n");
  scanf("%f", &TrapezioBaseMenor);
  printf("\nDigite a medida da altura do trapezio:\n");
  scanf("%f", &TrapezioAltura);

  //Processamento e saida(trapezio)
  TrapezioArea = (TrapezioBaseMaior + TrapezioBaseMenor)* TrapezioAltura/2;
  printf("A area do trapezio e: %f\n", TrapezioArea);

  //Entrada de dados do retanguilo
  printf("\nDigite a medida da base do retangulo:\n");
  scanf("%f",&RetanguloBase);
  printf("\nDigite a medida da altura do retangulo:\n");
  scanf("%f",&RetanguloAltura);

  //Processamento e saida
  RetanguloArea = RetanguloBase * RetanguloAltura;
  printf("\nA area do retangulo: %f\n ", RetanguloArea);

  //Entrada de dados do losango
  printf("\nDigite a medida da diagonal maior do losango:\n");
  scanf("%f",&LosangoDiagonalMaior);
  printf("\nDigite a medida da diagonal menor do losango:\n");
  scanf("%f",&LosangoDiagonalMenor);

  //Processamento e saida
  LosangoArea = (LosangoDiagonalMaior * LosangoDiagonalMenor)/2;
  printf("\nA area do losango: %f\n ", LosangoArea);

  return 0;

}
