#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    int area;
    float populacao;
    char turistico[50];
    float pib;

    printf("Digite a area: \n");
    scanf("%d", &area);

    printf("Digite a populacao: \n");
    scanf("%f", &populacao);

    printf("Digite o numero de pontos turisticos: \n");
    scanf(" %s[^\n]", turistico);  

    printf("Digite o PIB: \n");
    scanf("%f", &pib);

    printf("area: %d - populacao: %f\n", area, populacao);
    printf("pontos turisticos: %s - pib: %f\n", turistico, pib);

    return 0;
}