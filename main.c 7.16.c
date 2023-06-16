#include <stdio.h>
#include <string.h>



int main(void) {
    char cad1[50], cad2[50], *cad0 = "";
    int i = 0;

    printf("\nIngrese la primera cadena de caracteres: ");
    fgets(cad1, sizeof(cad1), stdin);

    printf("Ingrese la cadena a buscar: ");
    fgets(cad2, sizeof(cad2), stdin);

    cad0 = strdup(cad1); 
    cad0 = strstr(cad0, cad2); 

    while (cad0 != NULL) {
        i++;
        cad0 = strstr(cad0 + 1, cad2); 
    }

    printf("El número de veces que aparece la segunda cadena es: %d\n", i);
}
