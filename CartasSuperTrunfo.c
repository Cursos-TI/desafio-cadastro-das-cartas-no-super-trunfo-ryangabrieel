#include <stdio.h>

int main(){
    char opção = 'A';
    char nome[50] = "Cambara";
    int CEP = 86390000;
    int população = 25000;
    int PIB = 815000000;
    int pontos_turísticos = 4;

    // ----------------------------------------------------------------------------
    // Separação de Código
    // Carta 1

    printf("Escolha a opção: ");
    scanf ("%c", &opção);
    printf("A primeira carta é: %c\n", opção);

    printf("Digite o nome da Cidade: ");
    scanf ("%s", nome);
    printf("O nome da primeira ciddade é: %s\n", nome);

    printf("Qual o CEP da cidade escolhida?: ");
    scanf ("%d", &CEP);
    printf("O CEP é: %d\n", CEP);

    printf("Qual a quantidade da população?: ");
    scanf ("%d", &população);
    printf("A quantidade total é: %d\n", população);

    printf("Qual o PIB (aproximadamente)?: ");
    scanf ("%d", &PIB);
    printf("O PIB total é: %d\n", PIB);

    printf("Quantos pontos turísticos tem nessa cidade?: ");
    scanf ("%d", &pontos_turísticos);
    printf("Quantidade de pontos turísticos é: %d\n", pontos_turísticos);

    //printf("A primeira carta é: %c\n", opção);
    //printf("O nome da primeira ciddade é: %s\n", nome);
    //printf("O CEP é: %d\n", CEP);
    //printf("A quantidade total é: %d\n", população);
    //printf("O PIB total é: %d\n", PIB);
    //printf("Quantidade de pontos turísticos é: %d\n", pontos_turísticos);
}