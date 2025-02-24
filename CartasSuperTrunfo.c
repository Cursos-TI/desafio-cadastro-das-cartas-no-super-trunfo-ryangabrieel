#include <stdio.h>

int main() {
    int cep1, cep2;  // CEP
    char estado1[50], estado2[50];  // Estado
    char nome1[50], nome2[50];  // Nome da cidade
    int populacao1, populacao2;  // População
    float area1, area2;  // Área em km²
    int pib1, pib2;  // PIB
    int pontos_turisticos1, pontos_turisticos2;  // Número de pontos turísticos
    float densidade_populacional1, densidade_pupulacional2; // Densidade Populacional
    float PIB_PER_CAPITA1, PIB_PER_CAPITA2; // PIB per capita
    float media_densidade1, media_densidade2, media_pibpercapita1, media_pibpercapita2 ; // Densidade populacional, PIB per capita

    // Entrada de dados para a primeira cidade
    printf("Digite o CEP da primeira cidade: ");
    scanf("%d", &cep1);
    printf("Digite o estado da primeira cidade: ");
    scanf(" %s", estado1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", nome1);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%d", &pib1);
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda cidade
    printf("\nDigite o CEP da segunda cidade: ");
    scanf("%d", &cep2);
    printf("Digite o estado da segunda cidade: ");
    scanf(" %s", estado2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", nome2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%d", &pib2);
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados

    printf("\n===== Cidades Cadastradas =====\n");
    printf("Cidade 1: %s (%s) - CEP: %d\n", nome1, estado1, cep1);
    printf("População: %d | Área: %.2f km² | PIB: %d | Pontos turísticos: %d\n", populacao1, area1, pib1, pontos_turisticos1);

    printf("\nCidade 2: %s (%s) - CEP: %d\n", nome2, estado2, cep2);
    printf("População: %d | Área: %.2f km² | PIB: %d | Pontos turísticos: %d\n", populacao2, area2, pib2, pontos_turisticos2);
    
    // Exibição dos dados das Médias
    media_densidade1 = (float)(populacao1 + area1) / 2;
    media_densidade2 = (float)(populacao2 + area2) / 2;
    media_pibpercapita1 = (float)(pib1 + populacao1) / 2;
    media_pibpercapita2 = (float)(pib2 + populacao2) / 2;

    printf("\nA densidade populacional da Cidade 1 é: %.2f\n", media_densidade1);
    printf("O PIB per Capitada é: %.2f\n", media_pibpercapita1);

    printf("\nA densidade populacional da Cidade 2 é: %.2f\n", media_densidade2);
    printf("O PIB per Capitada é: %.2f\n", media_pibpercapita2);


    return 0;
}
