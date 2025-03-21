#include <stdio.h>

int main() {
    char estado1[20], estado2[20];
    char codigo1[4], codigo2[4];
    char cidade1[20], cidade2[20];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

    // Coletando dados para a primeira carta
    printf("Estado 1: ");
    scanf(" %[^\n]s", estado1);
    printf("Código 1: ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade 1: ");
    scanf(" %[^\n]s", cidade1);
    printf("População 1: ");
    scanf("%d", &populacao1);
    printf("Área 1 (km²): ");
    scanf("%f", &area1);
    printf("PIB 1 (bilhões de R$): ");
    scanf("%f", &PIB1);
    printf("Número de Pontos Turísticos 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidadepopulacional1 = populacao1 / area1;
    PIBpercapita1 = (PIB1 * 1e9) / populacao1; // Convertendo PIB de bilhões para reais

    // Coletando dados para a segunda carta
    printf("\nEstado 2: ");
    scanf(" %[^\n]s", estado2);
    printf("Código 2: ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade 2: ");
    scanf(" %[^\n]s", cidade2);
    printf("População 2: ");
    scanf("%d", &populacao2);
    printf("Área 2 (km²): ");
    scanf("%f", &area2);
    printf("PIB 2 (bilhões de R$): ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadepopulacional2 = populacao2 / area2;
    PIBpercapita2 = (PIB2 * 1e9) / populacao2; // Convertendo PIB de bilhões para reais

    // Exibindo os dados coletados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB:  %.2f bilhões de reais\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per capita:  %.2f\n reais", PIBpercapita1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per capita: %.2f reais\n", PIBpercapita2);

    return 0;
}

