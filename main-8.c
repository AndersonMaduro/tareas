#include <stdio.h>

int main(void) {
float DIS, MIN, SEG, CEN;
 float  TSE, VMS, VKH;

  printf("distancia en metros:");
  scanf("%f", &DIS);

  printf("El tiempo en minutos:");
  scanf("%f", &MIN);

  printf("Ingrese el número de segundos: ");
    scanf("%f", &SEG);
    
    printf("Ingrese el número de centésimas: ");
    scanf("%f", &CEN);
    
    // Calcula el tiempo en segundos
    TSE = MIN * 60 + SEG + CEN / 100.0;
    
    // Calcula la velocidad en metros por segundo
    VMS = DIS / TSE;
    
    // Calcula la velocidad en kilómetros por hora
    VKH = VMS * 3.6;


  
  
  

    printf("La velocidad del corredor en kph es:%.f\n",VKH);

  
    
  

  
  
}