#include <stdio.h>
#include <math.h>
 
int main()
{
   // Inicializando variáveis
   int A2, B2, C2, resultadoR;
   char nome[14];
   
   // Coleta de dados
   printf("Qual é o seu nome?: ");
   scanf("%s", nome);
 
   printf("Olá %s! Informe um valor para a variável A: ");
   scanf("%d", &A2);
 
   printf("Informe um valor para a variável B: ");
   scanf("%d", &B2);
 
   printf("Informe um valor para a variável C: ");
   scanf("%d", &C2);
   
   // Calculando resultado
   resultadoR= (pow(A2,2) + pow(B2,2) + pow(C2,2)); //pow: função que realiza potenciação
   
   // Impressão de resultados
   printf("O resultado da soma dos quadrados dos três valores informados: %d", resultadoR);
 
 
   return 0;
}
