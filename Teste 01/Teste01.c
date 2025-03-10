#include <stdio.h>

int main() {
    char estado[7];  // Para estados como "Pará" + '\0'
    char codigo[4];  // Para códigos de 3 caracteres + '\0'
    char cidade[10]; // Para cidade de até 9 caracteres + '\0'
    int populacao;
    int pontosTuristicos;
    float area;
    float PIB;

    printf("Estado: ");
    scanf("%6s", estado); 

    printf("Código: ");
    scanf("%3s", codigo);

    printf("Nome da Cidade: ");
    scanf("%9s", cidade);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos);

    // Exibindo os dados coletados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
return 0;
}