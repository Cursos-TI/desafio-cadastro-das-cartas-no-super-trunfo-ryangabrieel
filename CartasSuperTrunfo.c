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
    char letra_2 = 'B';
    char nome_2[50] = "Ourinhos";
    int CEP_2 = 13054351;
    int pessoas_2 = 103970;
    int PIB_2 = 4000000;
    int pontos_turisticos_2 = 10;

    // ----------------------------------------------------------------------------
    // Separação de Código
    // Carta 1

    printf("Escolha a letra da primeira carta: ");
    scanf ("%c", &letra);
    
    printf("Digite um nome de uma cidade: ");
    scanf ("%s", nome);

    printf("Digite o CEP: ");
    scanf ("%d", &CEP);

    printf("Quantidade total de pessoas dessa cidade: ");
    scanf ("%d", &pessoas);
    
    printf("Qual o PIB (aproximadamente) total desse lugar?: ");
    scanf ("%d", &PIB);

    printf("Quantidades de pontos turisticos: ");
    scanf ("%d", &pontos_turisticos);

    //----------------------------------------------------------------------------

    printf("Escolha a letra da segunda carta: ");
    scanf ("%c\n", &letra_2);
    
    printf("Digite um nome de outra cidade: ");
    scanf ("%s\n", nome_2);

    printf("Digite o CEP: ");
    scanf ("%d\n", &CEP_2);

    printf("Quantidade total de pessoas dessa segunda cidade: ");
    scanf ("%d\n", &pessoas_2);
    
    printf("Qual o PIB (aproximadamente) total desse lugar?: ");
    scanf ("%d\n", &PIB_2);

    printf("Quantidades de pontos turisticos: ");
    scanf ("%d\n", &pontos_turisticos_2);
    // ----------------------------------------------------------------------------

    printf("Detalhes da PRIMEIRA CARTA");
    printf("A letra da carta é: %c\n", letra);
    printf("O nome da ciddade é: %s\n", nome);
    printf("O CEP é: %d\n", CEP);
    printf("A quantidade total é: %d\n", pessoas);
    printf("O PIB total é: %d\n", PIB);
    printf("Quantidade de pontos turísticos é: %d\n", pontos_turisticos);

    printf("Detalhes da SEGUNDA CARTA");
    printf("A letra da carta é: %c\n", letra_2);
    printf("O nome da ciddade é: %s\n", nome_2);
    printf("O CEP é: %d\n", CEP_2);
    printf("A quantidade total é: %d\n", pessoas_2);
    printf("O PIB total é: %d\n", PIB_2);
    printf("Quantidade de pontos turísticos é: %d\n", pontos_turisticos_2);


    // ----------------------------------------------------------------------------

}