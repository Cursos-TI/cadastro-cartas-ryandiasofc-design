#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   char estaddo;
   char código[5];
   char nomeCidade[50];
   int habitantes;
   float área;
   float pib;
   int pontosTurísticos;

  // Área para entrada de dados
  printf("Cadastro da Carta 1\n");
   printf("Estado: ");
   scanf(" %c", &estaddo);
   printf("Código: ");
   scanf(" %s", código);
   printf("Nome da Cidade: ");
   scanf("%s", nomeCidade);
   printf("Número de Habitantes: ");
   scanf("%d", &habitantes);
   printf("Área (km²): ");
   scanf("%f", &área);
   printf("PIB (R$ bilhões): ");
   scanf("%f", &pib);
   printf("Número de Pontos Turísticos: ");
   scanf("%d", &pontosTurísticos);
   printf("\n--- Carta 1 Cadastrada ---\n");

   printf("cadastro da carta 2\n");
    printf("Estado: ");
    scanf(" %c", &estaddo);
    printf("Código: ");
    scanf(" %s", código);
    printf("Nome da Cidade: ");
    scanf("%s", nomeCidade);
    printf("Número de Habitantes: ");
    scanf("%d", &habitantes);
    printf("Área (km²): ");
    scanf("%f", &área);
    printf("PIB (R$ bilhões): ");
    scanf("%f", &pib);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTurísticos);
    printf("\n--- Carta 2 Cadastrada ---\n");

  // Área para exibição dos dados da cidade
    printf("exibindo dados de cartas cadastradas:\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estaddo);
    printf("Código: %s\n", código);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Número de Habitantes: %d\n", habitantes); 
    printf("Área (km²): %.2f\n", área);
    printf("PIB (R$ bilhões): %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos);
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estaddo);
    printf("Código: %s\n", código);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("Número de Habitantes: %d\n", habitantes);
    printf("Área (km²): %.2f\n", área);
    printf("PIB (R$ bilhões): %.2f\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTurísticos);








return 0;
} 
