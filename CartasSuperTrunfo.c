#include <stdio.h>

int main() {

    // Definindo variáveis
    char estado1, estado2;
    char codigocarta1[4], codigocarta2[4];
    char cidade1[21], cidade2[21];
    unsigned long int populacaocidade1, populacaocidade2;    
    int numpturisticoscid1, numpturisticoscid2;
    float areacidade1, areacidade2, pibcidade1, pibcidade2;

    //variaveis que vão ser calculadas
    float densidade_populacional1, densidade_populacional2, pib_percapita1, pib_percapita2;
    float super_poder1, super_poder2;

    // Lendo dados da carta 1
    
    printf("Digita letra do estado 1: \n");
    scanf(" %c", &estado1);
    printf("Digita Código da carta 1: \n");
    scanf("%3s", codigocarta1);
    printf("Digite nome da cidade 1: \n");
    scanf(" %20[^\n]", cidade1);
    printf("Digite população da cidade 1: \n");
    scanf("%lu", &populacaocidade1);
    printf("Digite a área em Km2 da cidade 1: \n");
    scanf("%f", &areacidade1);
    printf("Digite PIB da cidade 1 em bilhões de reais: \n");
    scanf("%f", &pibcidade1);
    printf("Digite Número de pontos turísticas da cidade 1: \n");
    scanf("%d", &numpturisticoscid1);

    // Lendo dados da carta 2
    
    printf("Digita letra do estado 2: \n");
    scanf(" %c", &estado2);
    printf("Digita Código da carta 2: \n");
    scanf("%3s", codigocarta2);
     printf("Digite nome da cidade 2: \n");
    scanf(" %20[^\n]", cidade2);
    printf("Digite população da cidade 2: \n");
    scanf("%lu", &populacaocidade2);
    printf("Digite a área em Km2 da cidade 2: \n");
    scanf("%f", &areacidade2);
    printf("Digite PIB da cidade 2 em bilhões de reais: \n");
    scanf("%f", &pibcidade2);
    printf("Digite Número de pontos turísticas da cidade 2: \n");
    scanf("%d", &numpturisticoscid2);

    // Calculando densidade populacional das cidades
    densidade_populacional1 = populacaocidade1 / areacidade1;
    densidade_populacional2 = populacaocidade2 / areacidade2;

    // Calculando PIB per capita das cidades
    pib_percapita1 = (pibcidade1 / populacaocidade1) * 1000000;
    pib_percapita2 = (pibcidade2 / populacaocidade2) * 1000000;

    // Calculando Super Poder das cidades
    super_poder1 = populacaocidade1 + numpturisticoscid1 + areacidade1 + pibcidade1 + pib_percapita1 + (1/densidade_populacional1);
    super_poder2 = populacaocidade2 + numpturisticoscid2 + areacidade2 + pibcidade2 + pib_percapita2 + (1/densidade_populacional2);

    // Imprimindo na tela a informação digitada da carta 1

    printf("\n--- Carta 1: ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacaocidade1);
    printf("Área: %.2f Km2\n", areacidade1);
    printf("PIB: %.2f bilhões de reais\n", pibcidade1);
    printf("Número de Pontos Turísticos: %d\n", numpturisticoscid1);
    printf("Densidade Populacional: %.2f habitantes/Km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f mil reais\n", pib_percapita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Imprimindo na tela a informação digitada da carta 2

    printf("\n--- Carta 2 ---:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacaocidade2);
    printf("Área: %.2f Km2\n", areacidade2);
    printf("PIB: %.2f bilhões de reais\n", pibcidade2);
    printf("Número de Pontos Turísticos: %d\n", numpturisticoscid2);
    printf("Densidade Populacional: %.2f habitantes/Km2\n", densidade_populacional2);
    printf("PIB per capita: %.2f mil reais\n", pib_percapita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparando os atributos das cartas e exibindo na tela o atributo vencedor

    printf("\n\n--- Comparação de Cartas: ---\n");

    // Comparação de População
    int vitoria_populacao = populacaocidade1 > populacaocidade2;
    if (vitoria_populacao) {
        printf("População: Carta 1 venceu (%d)\n", vitoria_populacao);
    } else {
        printf("População: Carta 2 venceu (%d)\n", vitoria_populacao);
    }

    // Comparação de Área
    int vitoria_area = areacidade1 > areacidade2;
    if (vitoria_area) {
        printf("Área: Carta 1 venceu (%d)\n", vitoria_area);
    } else {
        printf("Área: Carta 2 venceu (%d)\n", vitoria_area);
    }

    // Comparação de PIB
    int vitoria_pib = pibcidade1 > pibcidade2;
    if (vitoria_pib) {
        printf("PIB: Carta 1 venceu (%d)\n", vitoria_pib);
    } else {
        printf("PIB: Carta 2 venceu (%d)\n", vitoria_pib);
    }

    // Comparação de Pontos Turísticos
    int vitoria_turismo = numpturisticoscid1 > numpturisticoscid2;
    if (vitoria_turismo) {
        printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vitoria_turismo);
    } else {
        printf("Pontos Turísticos: Carta 2 venceu (%d)\n", vitoria_turismo);
    }

    // Comparação de Densidade Populacional
    int vitoria_densidade = densidade_populacional1 < densidade_populacional2;
    if (vitoria_densidade) {
        printf("Densidade Populacional: Carta 1 venceu (%d)\n", vitoria_densidade);
    } else {
        printf("Densidade Populacional: Carta 2 venceu (%d)\n", vitoria_densidade);
    }

    // Comparação de PIB per Capita
    int vitoria_pib_per_capita = pib_percapita1 > pib_percapita2;
    if (vitoria_pib_per_capita) {
        printf("PIB per Capita: Carta 1 venceu (%d)\n", vitoria_pib_per_capita);
    } else {
        printf("PIB per Capita: Carta 2 venceu (%d)\n", vitoria_pib_per_capita);
    }

    // Comparação de Super Poder
    int vitoria_super_poder = super_poder1 > super_poder2;
    if (vitoria_super_poder) {
        printf("Super Poder: Carta 1 venceu (%d)\n", vitoria_super_poder);
    } else {
        printf("Super Poder: Carta 2 venceu (%d)\n", vitoria_super_poder);
    }

return 0;
}
