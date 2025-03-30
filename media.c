#include <stdio.h>


int main(){

float nota1;
float nota2;
float nota3;
int quantidade = 3;

    printf("\nInforme a primeira nota do aluno: \n");
    scanf("%f", &nota1); 

    printf("\nInforme a segunda nota do aluno: \n");
    scanf("%f", &nota2);

    printf("\nInforme a terceira nota do aluno: \n");
    scanf("%f", &nota3); 

    float total = nota1+nota2+nota3;
    float media = total/quantidade;
    
    
    printf("\nA média de todos os alunos é: %.2f\n",media);



return 0;


}
