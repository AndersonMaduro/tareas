#include <stdio.h>
#include <stdlib.h>



int main(void) {
    char c, cad[10];
    int i = 0;
    float sum = 0.0;

    printf("\nDesea ingresar una cadena de caracteres (S/N)? ");
    c = getchar();

    while (c == 'S') {
        printf("\nIngrese la cadena de caracteres: ");
        fflush(stdin);
        fgets(cad, sizeof(cad), stdin);
        sum += atof(cad);
        i++;

        printf("\nDesea ingresar otra cadena de caracteres (S/N)? ");
        fflush(stdin);
        c = getchar();
    }

    printf("\nSuma: %.2f", sum);
    printf("\nPromedio: %.2f", sum / i);
}
