#include <stdio.h>
#include <math.h> // para usar ceil()

int main(void)
{
    //Declaracao de Variaveis
    float altura_degrau, altura_total;
    float qtd_degraus;

    //Entrada de Dados
    printf("Digite a altura de cada degrau (em metros): ");
    scanf("%f", &altura_degrau);
    printf("Digite a altura que deseja alcancar (em metros): ");
    scanf("%f", &altura_total);

    //Processamento
    qtd_degraus = (int)(altura_total / altura_degrau);

    //Saida
    printf("\nVoce precisa subir %f degraus.\n", qtd_degraus);

    return 0;
}
