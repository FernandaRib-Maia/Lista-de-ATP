#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    float C,Fahrenheit;

    // Entrada de dados
    printf("Digite a temperatura (em graus Celsius): ");
    scanf("%f", &C);

    //Processamento (Utilizando a formula fornecida na questao)
    Fahrenheit = (9 * C + 160)/5;

    //Saida
    printf("\nA temperatura em Fahrenheit e: %f\n", Fahrenheit);

    return 0;

}
