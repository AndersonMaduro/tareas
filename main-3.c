#include <stdio.h>

int main() 
{
  int N1 , N2;
  
  printf("Ingrese el primer numero:");
  scanf("%d", &N1);

  printf("ingrese el segundo numero:");
  scanf("%d", &N2);

  int suma = N1 + N2;
  int multiplicacion = N1 * N2;
  int resta = N1 - N2;

  printf("Suma: %d\n", suma);
  printf("multiplicacion: %d\n", multiplicacion);
  printf("resta: %d\n", resta);

  return 0;
}
