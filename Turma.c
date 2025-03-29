#include <stdio.h>

int main() {

int idade;
char nome[50];
int matricula;

printf("Informe seu nome: ");
scanf("%s", nome);
printf("Informe sua idade: ");
scanf("%d", &idade);
printf("Informe sua matricula: ");
scanf("%d", &matricula);
printf("%s tem %d anos e sua matricula escolar é a %d", nome, idade, matricula);


return 0;








}