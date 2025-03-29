#include <stdio.h>

int main (){
    int idade = 25;
    float altura = 1.75;
    char Profissao[] = "Pro player de rl"; 
    char nome[20] = "Sollax";
    double conta_bancaria_Btc = 38225;
    char carro_favorito[] = "Octane";

    printf("A altura do %s é: %.2f\n", nome, altura);
    printf("A idade do %s é: %d\n", nome, idade);
    printf("A profissão do %s é: %s\n", nome , Profissao);
    printf("A conta bancaria do %s é: %.0f\n",nome , conta_bancaria_Btc);
    printf("O carro favorito do %s é: %s\n", nome, carro_favorito);

    return 0;
