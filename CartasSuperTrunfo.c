#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_carta[5];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int atracoes;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("código da carta: \n");
    scanf("%s", &codigo_carta);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Número de habitantes: \n");
    scanf("%d", &populacao);

    printf("Area da cidade: \n");
    scanf("%f", &area);

    printf("PIB: \n");
    scanf("%f", &pib);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &atracoes);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("-------------------------------\nCarta: %s\n", codigo_carta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área da cidade: %.3f km\n", area);
    printf("PIB: %.1f bilhões\n", pib);
    printf("Número de pontos turísticos: %d", atracoes);

    return 0;

}
