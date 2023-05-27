#include <stdio.h>

int main(void) {
  
  float LAD; 

  printf("longitud de base :");
  scanf("%f", &LAD );

  // Cálculo del área de la base
    float area_base = LAD * LAD;
    
    // Cálculo del área lateral
    float area_lateral = 4 * LAD * LAD;
    
    // Cálculo del área total
    float area_total = 6 * LAD * LAD;
    
    // Cálculo del volumen
    float volumen = LAD * LAD * LAD;
  
    printf("Área de la base: %f\n", area_base);
    printf("Área lateral: %f\n", area_lateral);
    printf("Área total: %f\n", area_total);
    printf("Volumen: %f\n", volumen);

  

  
  
}