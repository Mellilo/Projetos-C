#include <stdio.h>

int main() {

    double salario1;
    double salario2;
    char nome1[50];
    char nome2[50];

   
    printf("Informe o nome: ");
    scanf("%s", nome1); 

    printf("Informe o outro nome: ");
    scanf("%s", nome2);

    printf("Informe o salario do primeiro jogador: ");
    scanf("%lf", &salario1); 

    printf("Informe o salario do segundo jogador: ");
    scanf("%lf", &salario2);

   
    printf("Salario do jogador %s é: %.2lf\n", nome1, salario1);
    printf("Salario do jogador %s é: %.2lf\n", nome2, salario2);

    return 0;
}





