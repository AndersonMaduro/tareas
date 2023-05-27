#include <stdio.h>

int main(void) {

float RAD;


  printf("ingrese el AREA del circulo:");
  scanf("%f", &RAD);

  float area = 3.1416 * RAD * RAD;
  float circunferencia = 2 * 3.1416 * RAD;

  printf("El area del circulo es: %f\n", area);
  printf("La longitud del circulo: %f\n", circunferencia);
  
  
  
  
}