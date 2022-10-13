int main()
{
   int n1, n2, resultadoSo, resultadoMu, resultadoSu, resultadoDi;
  
   printf("Informe um número: ");
   scanf("%d", &n1);
  
   printf("Informe outro número: ");
   scanf("%d", &n2);
  
   resultadoSo= n1 + n2;
   printf("A soma dos dois números é equivalente: %d \n", resultadoSo);
  
   resultadoMu= n1 * n2;
   printf("A multiplicação dos dois números é equivalente: %d \n", resultadoMu);
  
   resultadoSu= n1 - n2;
   printf("A subtração dos dois números é equivalente: %d \n", resultadoSu);
  
   resultadoDi= n1 / n2;
   printf("A divisão dos dois números é equivalente: %d", resultadoDi);
  
  
   return 0;
}
