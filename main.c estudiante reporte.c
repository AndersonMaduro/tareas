#include <stdio.h>

#define NUM_ESTUDIANTES 10
#define NUM_CALIFICACIONES 3

int main() {
   char estudiantes[NUM_ESTUDIANTES][20];  
   int calificaciones[NUM_ESTUDIANTES][NUM_CALIFICACIONES]; 
   float promedios[NUM_ESTUDIANTES];  

   for (int i = 0; i < NUM_ESTUDIANTES; i++) {
      printf("Ingrese el nombre del estudiante %d: ", i + 1);
      scanf("%s", estudiantes[i]);

      printf("Ingrese las calificaciones (3) para el estudiante %d:\n", i + 1);
      for (int j = 0; j < NUM_CALIFICACIONES; j++) {
         printf("Calificación %d: ", j + 1);
         scanf("%d", &calificaciones[i][j]);
      }
   }

   for (int i = 0; i < NUM_ESTUDIANTES; i++) {
      int suma = 0;
      for (int j = 0; j < NUM_CALIFICACIONES; j++) {
         suma += calificaciones[i][j];
      }
      promedios[i] = (float)suma / NUM_CALIFICACIONES;
   }

   
   printf("\nLista de Estudiantes:\n");
   for (int i = 0; i < NUM_ESTUDIANTES; i++) {
      printf("Estudiante %d: %s\n", i + 1, estudiantes[i]);
      printf("Calificaciones: ");
      for (int j = 0; j < NUM_CALIFICACIONES; j++) {
         printf("%d ", calificaciones[i][j]);
      }
      printf("\nPromedio: %.2f\n\n", promedios[i]);
   }
  
  
   return 0;
}

   
   