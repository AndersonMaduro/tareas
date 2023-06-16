#include <stdio.h>
#include <stdlib.h>

/* Funciones para el manejo de caracteres de la biblioteca stdlib.h. */

int main(void) {
    int i;
    double d;
    long l;
    char cad0[20], *cad1[20];

    printf("Ingrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin);
    i = atoi(cad0);

    printf("%s \t %d\n", cad0, i + 3);

    printf("Ingrese una cadena de caracteres: ");
    fgets(cad0, sizeof(cad0), stdin);
    d = atof(cad0);

    printf("%s \t %.2lf\n", cad0, d + 1.50);
    d = strtod(cad0, &*cad1);

    printf("%s \t %.2lf\n", cad0, d + 1.50);
    puts(*cad1);
    l = atol(cad0);

    printf("%s \t %ld\n", cad0, l + 10);
    l = strtol(cad0, &*cad1, 0);

    printf("%s \t %ld\n", cad0, l + 10);
    puts(*cad1);

    return 0;
}
