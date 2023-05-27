#include <stdio.h>
#include <math.h>


#define PI 3.14159


int main() {
   float radio, generatriz, altura;
   float areaBase, areaLateral, areaTotal, volumen;

   printf("Ingrese el radio del cono: ");
   scanf("%f", &radio);

   printf("Ingrese la generatriz del cono: ");
   scanf("%f", &generatriz);

   printf("Ingrese la altura del cono: ");
   scanf("%f", &altura);

   areaBase = PI * pow(radio, 2);
   areaLateral = PI * radio * generatriz;
   areaTotal = areaBase + areaLateral;
   volumen = (1.0/3.0) * areaBase * altura;

   printf("Area de la base: %.2f\n", areaBase);
   printf("Area lateral: %.2f\n", areaLateral);
   printf("Area total: %.2f\n", areaTotal);
   printf("Volumen: %.2f\n", volumen);
}