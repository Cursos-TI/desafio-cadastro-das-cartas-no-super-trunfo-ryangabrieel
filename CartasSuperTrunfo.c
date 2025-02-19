#include <stdio.h>

int main(){
    char letra, letra1 = 'A';
    char nome[50] = "Cambara";
    int CEP = 86390000;
    int pessoas = 25000;
    int PIB = 815000000;
    int pontos_turisticos = 4;

    // ----------------------------------------------------------------------------
    // Separação de Código
    // Carta 1

    printf("Escolha a letra da primeira carta: ");
    scanf ("%c", &letra);
    printf("A primeira carta é a letra: %c\n", letra);

    printf("Digite o nome da Cidade: ");
    scanf ("%s", nome);
    printf("O nome da primeira cidade é: %s\n", nome);

    printf("Qual o CEP da cidade escolhida?: ");
    scanf ("%d", &CEP);
    printf("O CEP é: %d\n", CEP);

    printf("Qual a quantidade total de pessoas nossa cidade?: ");
    scanf ("%d", &pessoas);
    printf("A quantidade total é: %d\n", pessoas);

    printf("Qual o PIB (aproximadamente)?: ");
    scanf ("%d", &PIB);
    printf("O PIB total é: %d\n", PIB);

    printf("Quantos pontos turisticos tem nessa cidade?: ");
    scanf ("%d", &pontos_turisticos);
    printf("Quantidade de pontos turisticos é: %d\n", pontos_turisticos);

    printf("A primeira carta é: %c\n", letra);
    printf("O nome da primeira ciddade é: %s\n", nome);
    printf("O CEP é: %d\n", CEP);
    printf("A quantidade total é: %d\n", pessoas);
    printf("O PIB total é: %d\n", PIB);
    printf("Quantidade de pontos turísticos é: %d\n", pontos_turisticos);

    //Separação da Carta 2
    // ----------------------------------------------------------------------------

    printf("Escolha a letra da segunda carta: ");
    scanf ("%c", &letra1);
    printf("A segunda carta é a letra: %c\n", letra1);

}