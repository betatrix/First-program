#include <stdio.h>
int main()
{
   int A1, B1, calculoAB, calculoBA;
   
   printf("Informe um múmero para a variável A: ");
   scanf("%d", &A1);
   printf("Informe um número para a variável B: ");
   scanf("%d", &B1);
   
   //Inversão dos números a partir de uma variável auxiliar
   A1= A1 + B1;
   B1= A1 - B1;
   A1= A1 - B1;
  
   printf("Os numeros informados tiveram seus valores trocados de modo em que: A: %d e B %d”, A1, B1);
   
   
   return 0;
}
