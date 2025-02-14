#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_carta1[10], codigo_carta2[10], codigo_carta3[10], codigo_carta4[10];
    char cidade1[30], cidade2[30], cidade3[30], cidade4[30];
    int populacao1, populacao2, populacao3, populacao4;
    float area1, area2, area3, area4;
    float pib1, pib2, pib3, pib4;
    int atracoes1, atracoes2, atracoes3, atracoes4;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("*** Caracteristicas da primeira cidade: *** \n");
    
    printf("código da carta: \n");
    scanf("%s", &codigo_carta1);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Número de habitantes: \n");
    scanf("%d", &populacao1);

    printf("Area da cidade: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &atracoes1);

    //cidade 2
    printf("\n *** Caracteristicas da segunda cidade: *** \n");

    printf("código da carta: \n");
    scanf("%s", &codigo_carta2);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Número de habitantes: \n");
    scanf("%d", &populacao2);

    printf("Area da cidade: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &atracoes2);

    //cidade 3
    printf("\n *** Caracteristicas da terceira cidade: *** \n");

    printf("código da carta: \n");
    scanf("%s", &codigo_carta3);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade3);

    printf("Número de habitantes: \n");
    scanf("%d", &populacao3);

    printf("Area da cidade: \n");
    scanf("%f", &area3);

    printf("PIB: \n");
    scanf("%f", &pib3);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &atracoes3);

    //cidade 4
    printf("\n *** Caracteristicas da quarta cidade: *** \n");

    printf("código da carta: \n");
    scanf("%s", &codigo_carta4);
    
    printf("Nome da cidade: \n");
    scanf("%s", &cidade4);

    printf("Número de habitantes: \n");
    scanf("%d", &populacao4);

    printf("Area da cidade: \n");
    scanf("%f", &area4);

    printf("PIB: \n");
    scanf("%f", &pib4);

    printf("Número de pontos túristicos: \n");
    scanf("%d", &atracoes4);  
    
    //Densidade Populacional: População dividida pela área da cidade (Cálculo).
    double den_populacional1 = populacao1 / area1;
    double den_populacional2 = populacao2 / area2;
    double den_populacional3 = populacao3 / area3;
    double den_populacional4 = populacao4 / area4;

    //PIB per Capita: PIB total dividido pela população (Cálcuilo).
    double pib_per_capita1 = (int) pib1 / populacao1;
    double pib_per_capita2 = (int) pib2 / populacao2;
    double pib_per_capita3 = (int) pib3 / populacao3;
    double pib_per_capita4 = (int) pib4 / populacao4;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Cidade 1
    printf("-------------------------------\nCarta: %s\n", codigo_carta1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área da cidade: %.3f km\n", area1);
    printf("PIB: %.1f bilhões\n", pib1);
    printf("Número de pontos turísticos: %d\n", atracoes1);
    printf("Densadade poipulacional: %.2f \n", den_populacional1);
    printf("PIB per Capita: %d \n", pib_per_capita1);

    // Cidade 2
    printf("-------------------------------\nCarta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.3f km\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", atracoes2);
    printf("Densadade poipulacional: %.2f \n", den_populacional2);
    printf("PIB per Capita: %d \n", pib_per_capita2);

    // Cidade 3
    printf("-------------------------------\nCarta: %s\n", codigo_carta3);
    printf("Cidade: %s\n", cidade3);
    printf("População: %d\n", populacao3);
    printf("Área da cidade: %.3f km\n", area3);
    printf("PIB: %.1f bilhões\n", pib3);
    printf("Número de pontos turísticos: %d\n", atracoes3);
    printf("Densadade poipulacional: %.2f \n", den_populacional3);
    printf("PIB per Capita: %d \n", pib_per_capita3);

    // Cidade 4
    printf("-------------------------------\nCarta: %s\n", codigo_carta4);
    printf("Cidade: %s\n", cidade4);
    printf("População: %d\n", populacao4);
    printf("Área da cidade: %.3f km\n", area4);
    printf("PIB: %.1f bilhões\n", pib4);
    printf("Número de pontos turísticos: %d\n", atracoes4);
    printf("Densadade poipulacional: %.2f \n", den_populacional4);
    printf("PIB per Capita: %d \n", pib_per_capita4);

    return 0;

}