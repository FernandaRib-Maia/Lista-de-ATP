#include <stdio.h>

int main(void)
{
    //Declaracao de Variaveis
    int total, cand1, cand2, nulos;
    float perc1, perc2, percnulos;

     //Entrada de Dados
    printf("Informe o numero total de eleitores: ");
    scanf("%d", &total);
    printf("Informe o numero de votos do candidato 1: ");
    scanf("%d", &cand1);
    printf("Informe o numero de votos do candidato 2: ");
    scanf("%d", &cand2);

    // Procesamento
    nulos = total - (cand1 + cand2);
    perc1 = (cand1 * 100.0) / total;
    perc2 = (cand2 * 100.0) / total;
    percnulos = (nulos * 100.0) / total;

    //Saida
    printf("\nCandidato 1: %.2f%% dos votos\n", perc1);
    printf("\nCandidato 2: %.2f%% dos votos\n", perc2);
    printf("\nNulos: %.2f%% dos votos\n", percnulos);

    return 0;
}
