#include <stdio.h>

int main() {
    char letra1, letra2;
    char name1[50], name2[50];
    int cep1, cep2, pib1, pib2, pontos_turisticos1, pontos_turisticos2;

    // Entrada de dados para a primeira cidade
    printf("Digite a letra inicial da primeira cidade: ");
    scanf(" %c", &letra1);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %s", name1);
    printf("Digite o CEP da primeira cidade: ");
    scanf("%d", &cep1);
    printf("Digite o PIB da primeira cidade: ");
    scanf("%d", &pib1);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada de dados para a segunda cidade
    printf("\nDigite a letra inicial da segunda cidade: ");
    scanf(" %c", &letra2);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %s", name2);
    printf("Digite o CEP da segunda cidade: ");
    scanf("%d", &cep2);
    printf("Digite o PIB da segunda cidade: ");
    scanf("%d", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados
    printf("\n===== Cidades Cadastradas =====\n");
    printf("Cidade 1: %s (Letra: %c, CEP: %d, PIB: %d, Pontos turísticos: %d)\n", name1, letra1, cep1, pib1, pontos_turisticos1);
    printf("Cidade 2: %s (Letra: %c, CEP: %d, PIB: %d, Pontos turísticos: %d)\n", name2, letra2, cep2, pib2, pontos_turisticos2);

    return 0;
}