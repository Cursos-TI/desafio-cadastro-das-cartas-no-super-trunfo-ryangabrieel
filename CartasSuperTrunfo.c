#include <stdio.h>

int main(){
    //Codigo da Primeira Carta
    char letra = 'A';
    char nome[50] = "Cambara";
    int CEP = 86390000;
    int pessoas = 25000;
    int PIB = 136000000;
    int pontos_turisticos = 4;

    //Codigo da Segunda Carta
    char letra2 = 'B';
    char nome2[50] = "Ourinhos";
    int CEP2 = 13054351;
    int pessoas2 = 103970;
    int PIB2 = 4000000;
    int pontos_turisticos2 = 10;

    // ----------------------------------------------------------------------------
    // Separação de Código

    printf("Escolha a letra da primeira carta: ");
    scanf("%c", &letra);
    printf("Escolha a letra da segunda carta: ");
    scanf("%c\n", &letra2);


    printf("Digite um nome da primeira cidade: ");
    scanf("%s", nome);
    printf("Digite um nome para a segunda cidade: ");
    scanf("%s\n", nome2);


    printf("Digite o CEP da primeira carta: ");
    scanf("%d", &CEP);
    printf("Digite o segundo CEP: ");
    scanf("%d\n", &CEP2);


    printf("Quantidade total de pessoas da primeira cidade: ");
    scanf("%d", &pessoas);
    printf("Quantidade total de pessoas da segunda cidade: ");
    scanf("%d", &pessoas2);

    
    printf("Qual o PIB (aproximadamente) total do primeiro lugar?: ");
    scanf("%d", &PIB);
    printf("Qual o PIB (aproximadamente) total do segundo lugar?: ");
    scanf("%d", &PIB2);

    printf("Quantidades de pontos turisticos da primeira carta: ");
    scanf("%d", &pontos_turisticos);
    printf("Quantidades de pontos turisticos da segunda carta: ");
    scanf("%d", &pontos_turisticos2);

    // ----------------------------------------------------------------------------

    //printf("Detalhes da PRIMEIRA CARTA");
    //printf("A letra da carta é: %c\n", letra);
    //printf("O nome da ciddade é: %s\n", nome);
    //printf("O CEP é: %d\n", CEP);
    //printf("A quantidade total é: %d\n", pessoas);
   // printf("O PIB total é: %d\n", PIB);
   // printf("Quantidade de pontos turísticos é: %d\n", pontos_turisticos);

    //printf("Detalhes da SEGUNDA CARTA");
    //printf("A letra da carta é: %c\n", letra_2);
    //printf("O nome da ciddade é: %s\n", nome_2);
    //printf("O CEP é: %d\n", CEP_2);
    //printf("A quantidade total é: %d\n", pessoas_2);
    //printf("O PIB total é: %d\n", PIB_2);
    //printf("Quantidade de pontos turísticos é: %d\n", pontos_turisticos_2);

    // ----------------------------------------------------------------------------

}