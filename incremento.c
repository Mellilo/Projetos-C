#include <stdio.h>


int main(){

//int resultado=200 ;

//resultado *= 5;

//printf("\n\nO resultado é: %d  \n\n",resultado);

//resultado -= 2;
//printf("\n\nO resultado é: %d  \n\n",resultado);
//resultado +=8;
//printf("\n\nO resultado é: %d  \n\n",resultado);
//resultado /=2;
//printf("\n\nO resultado é: %d  \n\n",resultado);


int numero1 = 1, resultado;

printf("\n\nAntes incremento: %d \n\n",numero1);

resultado = numero1++;

printf("\n\nApos Pós incremento - O Número 1 recebe o valor: %d - O Resultado: %d  \n\n",numero1,resultado);

resultado = ++numero1;

printf("\n\nApos Pré incremento - O Número 1 recebe o valor: %d - O Resultado: %d  \n\n",numero1,resultado);

resultado = numero1--;
printf("\n\nApos Pós decremento - O Número 1 recebe o valor: %d - O Resultado: %d  \n\n",numero1,resultado);

resultado = --numero1;

printf("\n\nApos Pré decremento - O Número 1 recebe o valor: %d - O Resultado: %d  \n\n",numero1,resultado);

    return 0;
}