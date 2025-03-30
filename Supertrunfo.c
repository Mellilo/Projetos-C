#include <stdio.h>

int main() {

//Declarando variavel da primeira carta

char Estado1, Codigo_da_carta1[4], Cidade1[50];
int Populacao1, Numeros_de_pontos_turisticos1;
float Area1, PIB1,Densidade_populacional1,PIB_per_capita1;

//Declarando variavel da segunda carta
char Estado2, Codigo_da_carta2[4], Cidade2[50];
int Populacao2, Numeros_de_pontos_turisticos2;
float Area2, PIB2,Densidade_populacional2,PIB_per_capita2;


//Enunciado
printf("\n\nSejam bem vindos ao jogo SUPER TRUNFO\n");

// Primeira Carta
printf("Insira uma letra de A até H representando um dos oito estados:\n");
scanf(" %c", &Estado1);

printf("Insira a letra do estado seguido de um número entre 01 a 04:\n");
scanf("%s", Codigo_da_carta1);

printf("Insira o nome da cidade.\n");
scanf("%s", Cidade1);

printf("Insira a população da cidade.\n");
scanf("%d", &Populacao1);

printf("Insira a area em Km²:\n");
scanf("%f", &Area1);

printf("Insira o PIB(Produto Interno Bruto) da cidade:\n");
scanf("%f", &PIB1);

printf("Insira a quantidade de pontos turísticos disponíveis na cidade:\n");
scanf("%d", &Numeros_de_pontos_turisticos1);


printf("\n\nAgora vamos criar a segunda carta\n");
// Segunda Carta

printf("Insira uma letra diferente da primeira entre A e H:\n");
scanf(" %c", &Estado2);

printf("Insira uma letra do estado seguindo de um numero diferente da primeira entre 01 e 04:\n");
scanf("%s", Codigo_da_carta2);

printf("Insira o nome da cidade.\n");
scanf("%s", Cidade2);

printf("Insira a população da cidade.\n");
scanf("%d", &Populacao2);

printf("Insira a área em Km²:\n");
scanf("%f", &Area2);

printf("Insira o PIB(Produto Interno Bruto) da cidade:\n");
scanf("%f", &PIB2);

printf("Insira a quantidade de pontos turísticos disponíveis na cidade:\n");
scanf("%d", &Numeros_de_pontos_turisticos2);

PIB_per_capita1 = PIB1 / Populacao1;
PIB_per_capita2 = PIB2 / Populacao2;
Densidade_populacional1 = Populacao1 / Area1;
Densidade_populacional2  = Populacao2 / Area2;


//Immprindo primeira carta

printf("\n\nA Primeira carta é:\n");
printf("Estado: %c\n",Estado1);
printf("Código: %s\n",Codigo_da_carta1);
printf("Cidade: %s\n",Cidade1);
printf("A população da cidade é: %d habitantes\n",Populacao1);
printf("A area da cidade é: %.0f\n",Area1);
printf("O Pib da cidade é: %.0f\n",PIB1);
printf("A quantidade de pontos turísticos da cidade são: %d\n",Numeros_de_pontos_turisticos1);
printf("Densidade Populacional: %2.f hab/km²\n",Densidade_populacional1);
printf("Pib per Capita: %2.f reais\n",PIB_per_capita1);

//Immprindo segunda carta
printf("\nA segunda carta é:\n");
printf("Estado: %c\n",Estado2);
printf("Código: %s\n",Codigo_da_carta2);
printf("Cidade: %s\n",Cidade2);
printf("A população da cidade é: %d habitantes\n",Populacao2);
printf("A area da cidade é: %.0f km²\n",Area2);
printf("O Pib da cidade é: %.0f\n",PIB2);
printf("A quantidade de pontos turísticos da cidade são: %d\n",Numeros_de_pontos_turisticos2);
printf("Densidade Populacional: %2.f hab/km²\n",Densidade_populacional2);
printf("Pib per Capita: %2.f reais\n",PIB_per_capita2);

return 0;



}