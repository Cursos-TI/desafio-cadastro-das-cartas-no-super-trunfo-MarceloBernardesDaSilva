#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste Marcelo Bernardes da Silva

// Função para calcular a densidade populacional
float calcularDensidade (int populacao, float area)
{return populacao / area;}

int main() {

// Variaveis para a primeira carta    
char estado1, codigo1[4];
char nomeCidade1[50];
int populacao1, pontosTuristicos1;
float area1, pib1;

// Variaveis para a segunda carta
char estado2, codigo2[4];
char nomeCidade2[50];
int populacao2, pontosTuristicos2;
float area2, pib2;
    
printf("Desafio - Cartas Super Trunfo!\n\n");

// Coleta de dados da PRIMEIRA carta
   
printf("Carta 1\n");

printf("Digite o Estado: ");
scanf(" %c", &estado1);
getchar(); // consome o Enter

printf("Código da carta: ");
scanf("%s", codigo1);
    
printf("Nome da cidade: ");
scanf("%s", nomeCidade1);
   
printf("População: ");
scanf("%d", &populacao1);

printf("Área: ");
scanf(" %f", &area1);

printf("PIB: ");
scanf(" %f", &pib1);
   
printf("Pontos Turísticos: ");
scanf(" %d", &pontosTuristicos1);

while(getchar() != '\n'); // Limpa o buffer completamente

// Coleta dos dados da SEGUNDA carta

printf("\n Carta 2\n");

printf("Digite o estado: ");
scanf(" %c", &estado2);
getchar(); // consome o Enter
   
printf("Código da carta: ");
scanf("%s", codigo2);
   
printf("Nome da Cidade: ");
scanf("%s", nomeCidade2);

while(getchar() != '\n'); // LIMPA BUFFER: Remove todos os caracteres restantes
   
printf("População: ");
scanf("%d", &populacao2);

printf("Área: ");
scanf(" %f", &area2);

printf("PIB: ");
scanf(" %f", &pib2);

printf("Pontos Turísticos: ");
scanf("%d", &pontosTuristicos2);


// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
// Cadastro das Cartas:
// Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
// Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Exibição dos Dados das Cartas:
// Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
// Exiba os valores inseridos para cada atributo da cidade, um por linha.

return 0;
}
