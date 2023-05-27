#include <stdio.h>

int main() {
    int DIA, segundos;

    printf("Ingrese el número de días: ");
    scanf("%d", &DIA);

    segundos = DIA * 24 * 60 * 60;

    printf("El número de segundos en %d días es: %d\n", DIA, segundos);

    return 0;
}
