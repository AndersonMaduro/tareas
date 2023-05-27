#include <stdio.h>


int main() {
    float RAD, AREA, VOLUMEN;
  #define PI 3.14159

    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &RAD);

    AREA = 4 * PI * RAD * RAD;
    VOLUMEN = (4.0 / 3.0) * PI * RAD * RAD * RAD;

    printf("Area de la esfera: %.2f\n", AREA);
    printf("Volumen de la esfera: %.2f\n", VOLUMEN);



  
}