#include <stdio.h>

int main() {

    // Declarando variáveis da primeira carta
    char Estado1, Codigo_da_carta1[4], Cidade1[50];
    int Numeros_de_pontos_turisticos1;
    float Area1, PIB1, Densidade_populacional1, PIB_per_capita1, superpoder_1;
    unsigned long int Populacao1;

    // Declarando variáveis da segunda carta
    char Estado2, Codigo_da_carta2[4], Cidade2[50];
    int Numeros_de_pontos_turisticos2;
    float Area2, PIB2, Densidade_populacional2, PIB_per_capita2, superpoder_2;
    unsigned long int Populacao2;

    // Enunciado
    printf("\n\nSejam bem-vindos ao jogo SUPER TRUNFO\n");

    // Primeira Carta
    printf("Insira uma letra de A até H representando um dos oito estados:\n");
    scanf(" %c", &Estado1);

    printf("Insira a letra do estado seguido de um número entre 01 a 04:\n");
    scanf("%s", Codigo_da_carta1);

    printf("Insira o nome da cidade:\n");
    scanf("%s", Cidade1);

    printf("Insira a população da cidade:\n");
    scanf("%lu", &Populacao1);

    printf("Insira a área em Km²:\n");
    scanf("%f", &Area1);

    printf("Insira o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB1);

    printf("Insira a quantidade de pontos turísticos disponíveis na cidade:\n");
    scanf("%d", &Numeros_de_pontos_turisticos1);

    printf("\n\nAgora vamos criar a segunda carta\n");

    // Segunda Carta
    printf("Insira uma letra diferente da primeira entre A e H:\n");
    scanf(" %c", &Estado2);

    printf("Insira uma letra do estado seguido de um número diferente da primeira entre 01 e 04:\n");
    scanf("%s", Codigo_da_carta2);

    printf("Insira o nome da cidade:\n");
    scanf("%s", Cidade2);

    printf("Insira a população da cidade:\n");
    scanf("%lu", &Populacao2);

    printf("Insira a área em Km²:\n");
    scanf("%f", &Area2);

    printf("Insira o PIB (Produto Interno Bruto) da cidade:\n");
    scanf("%f", &PIB2);

    printf("Insira a quantidade de pontos turísticos disponíveis na cidade:\n");
    scanf("%d", &Numeros_de_pontos_turisticos2);

    // Cálculos
    PIB_per_capita1 = PIB1 / Populacao1;
    PIB_per_capita2 = PIB2 / Populacao2;

    Densidade_populacional1 = Populacao1 / Area1;
    Densidade_populacional2 = Populacao2 / Area2;

    superpoder_1 = (float)Populacao1 + Area1 + PIB1 + (float)Numeros_de_pontos_turisticos1 + PIB_per_capita1 + (1.0 / Densidade_populacional1);
    superpoder_2 = (float)Populacao2 + Area2 + PIB2 + (float)Numeros_de_pontos_turisticos2 + PIB_per_capita2 + (1.0 / Densidade_populacional2);

    // Comparação de cartas
    printf("\nComparação de Cartas:\n\n");
    printf("População: Carta %s venceu (%d)\n", Populacao1 > Populacao2 ? "1" : "2", Populacao1 > Populacao2 ? 1 : 0);
    printf("Área: Carta %s venceu (%d)\n", Area1 > Area2 ? "1" : "2", Area1 > Area2 ? 1 : 0);
    printf("PIB: Carta %s venceu (%d)\n", PIB1 > PIB2 ? "1" : "2", PIB1 > PIB2 ? 1 : 0);
    printf("Pontos Turísticos: Carta %s venceu (%d)\n", Numeros_de_pontos_turisticos1 > Numeros_de_pontos_turisticos2 ? "1" : "2", Numeros_de_pontos_turisticos1 > Numeros_de_pontos_turisticos2 ? 1 : 0);
    printf("Densidade Populacional: Carta %s venceu (%d)\n", Densidade_populacional1 < Densidade_populacional2 ? "1" : "2", Densidade_populacional1 < Densidade_populacional2 ? 1 : 0);
    printf("PIB per Capita: Carta %s venceu (%d)\n", PIB_per_capita1 > PIB_per_capita2 ? "1" : "2", PIB_per_capita1 > PIB_per_capita2 ? 1 : 0);
    printf("Super Poder: Carta %s venceu (%d)\n", superpoder_1 > superpoder_2 ? "1" : "2", superpoder_1 > superpoder_2 ? 1 : 0);

    // Valores dos superpoderes
    printf("\nSuper Poder da Carta 1: %.2f\n", superpoder_1);
    printf("Super Poder da Carta 2: %.2f\n", superpoder_2);

    // Imprimindo a primeira carta
    printf("\n\nA Primeira carta é:\n");
    printf("Estado: %c\n", Estado1);
    printf("Código: %s\n", Codigo_da_carta1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %lu habitantes\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_capita1);

    // Imprimindo a segunda carta
    printf("\nA Segunda carta é:\n");
    printf("Estado: %c\n", Estado2);
    printf("Código: %s\n", Codigo_da_carta2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %lu habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Numeros_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n\n", PIB_per_capita2);

    return 0;
}
