#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo_carta1[10], codigo_carta2[10];
    char cidade1[30], cidade2[30];
    unsigned int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int atracoes1, atracoes2, modo;
    
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

    
    //Densidade Populacional: População dividida pela área da cidade (Cálculo).
    double den_populacional1 = populacao1 / area1;
    double den_populacional2 = populacao2 / area2;

    //PIB per Capita: PIB total dividido pela população (Cálcuilo).
    double pib_per_capita1 = pib1 / (float) populacao1;
    double pib_per_capita2 = pib2 / (float) populacao2;

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
    printf("PIB per Capita: %f \n", pib_per_capita1);

    // Cidade 2
    printf("-------------------------------\nCarta: %s\n", codigo_carta2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área da cidade: %.3f km\n", area2);
    printf("PIB: %.1f bilhões\n", pib2);
    printf("Número de pontos turísticos: %d\n", atracoes2);
    printf("Densadade poipulacional: %.2f \n", den_populacional2);
    printf("PIB per Capita: %f \n", pib_per_capita2);

    //Menu de escolha do atributo que será comparado
    printf("\n *** Seleção de atributos: escolha o atributo que deseja comparar *** \n");
    printf("1. População \n");
    printf("2. Área da cidade \n");
    printf("3. PIB \n");
    printf("4. Número de pontos turísticos \n");
    printf("5. Densadade poipulacional \n");
    printf("6. PIB per Capita \n");
    scanf("%d", &modo);
    
    //Construção do menu
    switch (modo)
    {
    case 1:
    //Comparando os atributos e mostrando o resultado: população
    printf("Comparação de cartas (Atributo selecionado: População): \n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo_carta1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo_carta2, populacao2);
    
    if (populacao1 > populacao2){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (populacao1 < populacao2) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }
        break;
    case 2:
    //Comparando os atributos e mostrando o resultado: Área da cidade
    printf("Comparação de cartas (Atributo selecionado: Área da cidade): \n\n");
    printf("Carta 1 - %s (%s): %.3f\n", cidade1, codigo_carta1, area1);
    printf("Carta 2 - %s (%s): %.3f\n", cidade2, codigo_carta2, area2);
    
    if (area1 > area2){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (area1 < area2) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }
        break;

    case 3:
    //Comparando os atributos e mostrando o resultado: PIB
    printf("Comparação de cartas (Atributo selecionado: PIB): \n\n");
    printf("Carta 1 - %s (%s): %.1f\n", cidade1, codigo_carta1, pib1);
    printf("Carta 2 - %s (%s): %.1f\n", cidade2, codigo_carta2, pib2);
    
    if (pib1 > pib2){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (pib1 < pib2) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }

        break;    
    
    case 4:
    //Comparando os atributos e mostrando o resultado: Número de pontos turísticos
    printf("Comparação de cartas (Atributo selecionado: Número de pontos turísticos): \n\n");
    printf("Carta 1 - %s (%s): %d\n", cidade1, codigo_carta1, atracoes1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, codigo_carta2, atracoes2);
    
    if (atracoes1 > atracoes2){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (atracoes1 < atracoes2) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }

        break;    

    case 5:
    //Comparando os atributos e mostrando o resultado: Densadade poipulacional
    printf("Comparação de cartas (Atributo selecionado: Densadade poipulacional): \n\n");
    printf("Carta 1 - %s (%s): %.2f\n", cidade1, codigo_carta1, den_populacional1);
    printf("Carta 2 - %s (%s): %.2f\n", cidade2, codigo_carta2, den_populacional2);
    
    if (den_populacional2 > den_populacional1){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (den_populacional2 < den_populacional1) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }

        break;    

    case 6:
    //Comparando os atributos e mostrando o resultado: PIB per Capita
    printf("Comparação de cartas (Atributo selecionado: PIB per Capita): \n\n");
    printf("Carta 1 - %s (%s): %.1f\n", cidade1, codigo_carta1, pib_per_capita1);
    printf("Carta 2 - %s (%s): %.1f\n", cidade2, codigo_carta2, pib_per_capita2);
    
    if (pib1 > pib2){
        printf("Cidade 1 (%s) venceu!", cidade1);
    } else if (pib1 < pib2) {
        printf("Cidade 2 (%s) venceu!", cidade2);
    } else {
        printf("Deu empate!");
    }

        break;   

    default:
        ("Opção invalida! \n");
        break;
    }
    
    return 0;

}