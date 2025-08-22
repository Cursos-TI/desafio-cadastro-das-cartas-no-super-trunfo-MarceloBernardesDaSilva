#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste Marcelo Bernardes da Silva

// Funções simples (fórmulas diretas) 

float calcularDensidade(unsigned long int populacao, float area) 
{
    if (area == 0.0f) return 0.0f;
    return (float)populacao / area;
}

float calcularPIBperCapita(float pib, unsigned long int populacao) 
{
    if (populacao == 0) return 0.0f;
    return pib / (float)populacao;
}

float calcularSuperPoder(unsigned long int pop, float area, float pib, int pontos) 
{
    float densidade = calcularDensidade(pop, area);
    float invDensidade = (densidade > 0.0f) ? (1.0f / densidade) : 0.0f;
    float pibPerCapita = calcularPIBperCapita(pib, pop);
    // Super Poder = soma dos numéricos + inverso da densidade
    return (float)pop + area + pib + (float)pontos + pibPerCapita + invDensidade;
}

int main() {

    // Variáveis da Carta 1 
    char estado1, codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    int pontosTuristicos1;
    float area1, pib1;

    // Variáveis da Carta 2 
    char estado2, codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    int pontosTuristicos2;
    float area2, pib2;

    printf("Desafio - Cartas Super Trunfo!\n\n");

    // Entrada Carta 1 
    printf("Carta 1\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado1);
    getchar(); // consome o Enter

    printf("Código da carta: ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada Carta 2 
    printf("\nCarta 2\n");

    printf("Digite o Estado: ");
    scanf(" %c", &estado2);
    getchar(); // consome o Enter

    printf("Código da carta: ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos Derivados 
    float densidade1 = calcularDensidade(populacao1, area1);
    float densidade2 = calcularDensidade(populacao2, area2);

    float pibPerCapita1 = calcularPIBperCapita(pib1, populacao1);
    float pibPerCapita2 = calcularPIBperCapita(pib2, populacao2);

    float super1 = calcularSuperPoder(populacao1, area1, pib1, pontosTuristicos1);
    float super2 = calcularSuperPoder(populacao2, area2, pib2, pontosTuristicos2);

    // Comparações 
    printf("\nComparação de Cartas:\n");

    int rPop   = (populacao1       > populacao2);
    int rArea  = (area1            > area2);
    int rPIB   = (pib1             > pib2);
    int rPtos  = (pontosTuristicos1 > pontosTuristicos2);
    int rDens  = (densidade1       < densidade2); // menor vence
    int rPIBpc = (pibPerCapita1    > pibPerCapita2);
    int rSuper = (super1           > super2);

    printf("População: Carta %d venceu (%d)\n",              rPop  ? 1 : 2, rPop);
    printf("Área: Carta %d venceu (%d)\n",                    rArea ? 1 : 2, rArea);
    printf("PIB: Carta %d venceu (%d)\n",                     rPIB  ? 1 : 2, rPIB);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n",       rPtos ? 1 : 2, rPtos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n",  rDens ? 1 : 2, rDens);
    printf("PIB per Capita: Carta %d venceu (%d)\n",          rPIBpc ? 1 : 2, rPIBpc);
    printf("Super Poder: Carta %d venceu (%d)\n",             rSuper ? 1 : 2, rSuper);

    return 0;
}
