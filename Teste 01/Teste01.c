#include <stdio.h>

int main() {
    char estado1[7], estado2[7];
    char codigo1[4], codigo2[4];
    char cidade1[10], cidade2[10];
    int populacao1, populacao2;
    int pontosTuristicos1, pontosTuristicos2;
    float area1, area2;
    float PIB1, PIB2;
    float densidadepopulacional1, densidadepopulacional2;
    float PIBpercapita1, PIBpercapita2;

    // Coletando dados para a primeira carta
    printf("Estado 1: ");
    scanf("%6s", estado1);
    printf("Código 1: ");
    scanf("%3s", codigo1);
    printf("Nome da Cidade 1: ");
    scanf("%9s", cidade1);
    printf("População 1: ");
    scanf("%d", &populacao1);
    printf("Área 1: ");
    scanf("%f", &area1);
    printf("PIB 1: ");
    scanf("%f", &PIB1);
    printf("Número de Pontos Turísticos 1: ");
    scanf("%d", &pontosTuristicos1);
    printf("Densidade populacional 1: ");
    scanf("%f", &densidadepopulacional1);
    printf("PIB per capita 1: ");
    scanf("%f", &PIBpercapita1);
    
    // Coletando dados para a segunda carta
    printf("\nEstado 2: ");
    scanf("%6s", estado2);
    printf("Código 2: ");
    scanf("%3s", codigo2);
    printf("Nome da Cidade 2: ");
    scanf("%9s", cidade2);
    printf("População 2: ");
    scanf("%d", &populacao2);
    printf("Área 2: ");
    scanf("%f", &area2);
    printf("PIB 2: ");
    scanf("%f", &PIB2);
    printf("Número de Pontos Turísticos 2: ");
    scanf("%d", &pontosTuristicos2);
    
    // Exibindo os dados coletados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", PIB1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
    return 0;
}