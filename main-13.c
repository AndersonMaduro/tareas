
  #include <stdio.h>

int main(void) {
  float X1, Y1, X2, Y2, X3, Y3;

  printf("Coordenadas del punto P1 (X1 Y1): ");
  scanf("%f %f", &X1, &Y1);

  printf("Coordenadas del punto P2 (X2 Y2): ");
  scanf("%f %f", &X2, &Y2);

  printf("Coordenadas del punto P3 (X3 Y3): ");
  scanf("%f %f", &X3, &Y3);

  // Cálculo del área
  float Area = 0.5 * ((X1 * (Y2 - Y3)) + (X2 * (Y3 - Y1)) + (X3 * (Y1 - Y2)));

  printf("El área del triángulo es: %f\n", Area);

}