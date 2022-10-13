int main()
{
   float C1, resultadoF;
 
   printf("Informe uma temperatura em graus Celsius (não é necessário o utilizar símbolo °): ");
   scanf("%f", &C1);
  
   resultadoF= (9 * C1 + 160)/5;
   printf("A temperatura convertida em graus Fahrenheit é equivalente a: %f", resultadoF);
  
 
   return 0;
}
